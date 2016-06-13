#include <stdio.h>


int main(void) {
  int c;
  int i;
  int nwhite;
  int nother;
  int ndigit[10];
  char *measure;

  nwhite = nother = 0;
  measure = "=========================";

  for (i = 0; i < 10; i++) {
    ndigit[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') {
      ndigit[c-'0']++;
    } else if (c == ' ' || c == '\n' || c == '\t') {
      nwhite++;
    } else {
      nother++;
    }
  }

  for (i = 0; i < 10; i++) {
    printf("digit %d: %.*s\n", i, ndigit[i], measure);
  }

  printf("white space: %.*s\nother: %.*s\n", nwhite, measure, nother, measure);

}
