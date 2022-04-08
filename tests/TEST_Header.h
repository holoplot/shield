#pragma once

inline void unused_parameter(int a) {
  return;
}

inline void unused_variable()
{
  int a = 0;
  return;
}

inline void dangling_else() {
  int a = 0;
  int b = 1;
  int c = 2;
  int d = 3;
  int e = 4;

  d = e;


  if (a == b)
    if (c == d)
      e = 1;
    else
      e = 2;
}
