# shield

The shield library offers warning suppresion of C/C++ header files.

It suppresses warnings for clang, GCC and MSVC compilers. This is particularly useful when third party libraries' warnings (relating to the library itself) create compilation noise and/or compilation to fail (e.g. when treating warnings as errors on a project).

The suppression works by wrapping included headers with a shield ON and OFF like in the example below.

Warning: Omitting the OFF header might result in undesired suppression of warnings (for example with unity builds).

Example:

```
#include <shield/on.h>

#include <concurrentqueue.h>

#include <shield/off.h>

```

## Similar

A similar library that has the same purpose is [leathers](https://github.com/ruslo/leathers). The reason that we went with a new library for suppressing warnings is the fact that we didn't want to have to drag boost along as the compiler can also be determined without it.

## Caveat

The list of warnings suppressed might not be complete. Please file an issue if you found a warning that should be added to the list.
