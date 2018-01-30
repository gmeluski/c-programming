#include <stdio.h>
int getcharacter(int);

int main(void) {
  int lower = getcharacter('C');
  printf("the character %d\n", lower);

}

int getcharacter(int character) {
  if (character >= 'A' && character <= 'Z') {
    return character + 'a' - 'A';
  } else {
    return character;
  }
}
