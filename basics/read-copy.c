#include <stdio.h>

int main(void) {

  int c;
  int charEval;


  while ((c = getchar()) != EOF) {
    putchar(c);
  }

  charEval = getchar() != EOF;
  printf("EOF is %d", charEval);


}
