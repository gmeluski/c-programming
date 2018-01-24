#include <stdio.h>
#define MAX_STRING_LENGTH 1000

int main(void) {
 /*
 for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
    s[i] = c;
  }

  */

  int i = 0;
  int lim = MAX_STRING_LENGTH;
  int c;

  char s[MAX_STRING_LENGTH];

  while (i < (lim - 1)) {
    c = getchar();
    if (c == EOF) {
      break;
    }

    if (c == '\n') {
      break;
    }

    s[i++] = c;
  }

  return 0;
}
