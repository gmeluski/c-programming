#include <stdio.h>

int main(void) {
  float fahr;
  float celsius;
  int lower;
  int upper;
  int step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = (fahr + step);
  }
}
