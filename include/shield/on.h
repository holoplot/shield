#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Weverything"

#elif defined(__GNUC__) || defined(__GNUG__)
#pragma GCC diagnostic push

#pragma GCC diagnostic ignored "-Wconversion-null"
#pragma GCC diagnostic ignored "-Wcast-align"
#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wdeprecated"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#pragma GCC diagnostic ignored "-Wempty-body"
#pragma GCC diagnostic ignored "-Wformat"
#pragma GCC diagnostic ignored "-Winvalid-offsetof"
#pragma GCC diagnostic ignored "-Wmissing-braces"
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#pragma GCC diagnostic ignored "-Wnarrowing"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wold-style-cast"
#pragma GCC diagnostic ignored "-Woverloaded-virtual"
#pragma GCC diagnostic ignored "-Wpadded"
#pragma GCC diagnostic ignored "-Wparentheses"
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wreturn-type"
#pragma GCC diagnostic ignored "-Wrestrict"
#pragma GCC diagnostic ignored "-Wshadow"
#pragma GCC diagnostic ignored "-Wsign-compare"
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wswitch"
#pragma GCC diagnostic ignored "-Wswitch-enum"
#pragma GCC diagnostic ignored "-Wundef"
#pragma GCC diagnostic ignored "-Wuninitialized"
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wunreachable-code"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-value"
#pragma GCC diagnostic ignored "-Wunused-variable"

#elif (_MSC_VER)
#pragma warning(push)

#pragma warning(disable : 4018) // 'expression' : signed/unsigned mismatch
#pragma warning(disable : 4061)
#pragma warning(disable : 4062)
#pragma warning(disable : 4100)
#pragma warning(disable : 4127)
#pragma warning(disable : 4191)
#pragma warning(disable : 4201)
#pragma warning(disable : 4242)
#pragma warning(disable : 4244)
#pragma warning(disable : 4250)
#pragma warning(disable : 4251)
#pragma warning(disable : 4265)
#pragma warning(disable : 4267)
#pragma warning(disable : 4275)
#pragma warning(disable : 4297)
#pragma warning(disable : 4305)
#pragma warning(disable : 4324)
#pragma warning(disable : 4350)
#pragma warning(disable : 4355)
#pragma warning(disable : 4365)
#pragma warning(disable : 4371)
#pragma warning(disable : 4388)
#pragma warning(disable : 4389)
#pragma warning(disable : 4435)
#pragma warning(disable : 4456)
#pragma warning(disable : 4457)
#pragma warning(disable : 4459)
#pragma warning(disable : 4503)
#pragma warning(disable : 4505)
#pragma warning(disable : 4510)
#pragma warning(disable : 4512)
#pragma warning(disable : 4514)
#pragma warning(disable : 4548)
#pragma warning(disable : 4555)
#pragma warning(disable : 4571)
#pragma warning(disable : 4574)
#pragma warning(disable : 4610)
#pragma warning(disable : 4619)
#pragma warning(disable : 4623)
#pragma warning(disable : 4625)
#pragma warning(disable : 4626)
#pragma warning(disable : 4628)
#pragma warning(disable : 4640)
#pragma warning(disable : 4668)
#pragma warning(disable : 4701) // Potentially uninitialized local variable 'name' used
#pragma warning(disable : 4702)
#pragma warning(disable : 4706)
#pragma warning(disable : 4710)
#pragma warning(disable : 4711)
#pragma warning(disable : 4714)
#pragma warning(disable : 4820)
#pragma warning(disable : 4826)
#pragma warning(disable : 4996)
#pragma warning(disable : 5054)

#endif
