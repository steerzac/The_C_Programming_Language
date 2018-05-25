/* Temperature conversion with a function call */

#include <stdio.h>


double fahrToCelsius(double fahr) {
  return 5 * (fahr - 32) / 9;
}

int main(int argc, char const *argv[]) {
  double fahr;
  int lower, upper, step;

  lower = 0;  /* lower limit of temperature table */
  upper = 200;  /* upper limit of temperature table */
  step = 20;  /* step size */

  for (fahr = lower; fahr <= upper; fahr += step) {
    printf("%.2f\t%.2f\n", fahr, fahrToCelsius(fahr));
  }
  return 0;
}
