#include <stdio.h>

double calculate_radius( double area);

int main()
{
  double my_area = 2.0;

  printf("A circle of area %f has a radiys of %f\n", my_area, calculate_radius(my_area) );

}

double calculate_radius( double area)
{
  double pi = 3.14159;
  double x, x_sq, x_cubed, x_4, x_5;

  // Calculate the square root by a Taylor series in powers of x- 1 (a bad choice of method!)
  x = area / pi -1.0;
  x_sq = x*x;
  x_cubed = x*x*x;
  x_4 = x*x*x*x;
  x_5 = x*x*x*x*x;

  return 1.0 + 1.0/2.0*x - 1.0/8.0*x_sq + 1.0/16.0*x_cubed - 5.0/128.0*x_4 + 7.0/256.0*x_5;
}
