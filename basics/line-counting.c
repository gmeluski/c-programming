#include<stdio.h>

int main(void) {

  int c, nl;

  nl = 0;

  while((c = getchar()) != EOF) {
    if (c == '\n' || c == ' ' || c == '\t') {
      nl++;
    }
  }

  printf("Okay? %d\n", nl);

}
