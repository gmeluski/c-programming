#include <stdio.h>


int main(void) {
  char s[7] = "23456";
  int i;
  int n;

  n = 0;

  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
    n = 10 * n + (s[i] - '0');
  }

  printf("the integers %d\n", n);
}
