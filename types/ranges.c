#include <stdio.h>
#include <limits.h>

int main(void) {
  // char
  // short
  // int
  // long

  printf("Char Min Unsigned %d, Signed %d\n", 0, CHAR_MIN);
  printf("Char Max Unsigned %u, Signed %d\n", UCHAR_MAX, CHAR_MAX);
  printf("Short Min Unsigned %d, Signed %o\n", 0, SHRT_MIN);
  printf("Short Max Unsigned %u, Signed %o\n", USHRT_MAX, SHRT_MAX);
  printf("Int Min Unsigned %d, Signed %d\n", 0, INT_MIN);
  printf("Int Max Unsigned %u, Signed %d\n", UINT_MAX,INT_MAX);
  printf("Long Min Unsigned %d, Signed %ld\n", 0, LONG_MIN);
  printf("Long Max Unsigned %lu, Signed %ld\n", ULONG_MAX, LONG_MAX);

}

