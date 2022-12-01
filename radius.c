#include <stdio.h>
#include <math.h>

double calculate_radius( double area);

int main()
{
  double my_area = 2.0;

  printf("A circle of area %f has a radius of %f\n", my_area, calculate_radius(my_area) );

}

double calculate_radius( double area)
{
  double pi = M_PI;
  double x, x_2, x_3, x_4, x_5;

  // Calculate the square root by a Taylor series in powers of x- 1 (a bad choice of method!)
  x = area / pi -1.0;
  x_2 = x*x;
  x_3 = x*x_2;
  x_4 = x_2*x_2;
  x_5 = x_3*x_2;

  return 1.0 + 1.0/2.0*x - 1.0/8.0*x_2 + 1.0/16.0*x_3 - 5.0/128.0*x_4 + 7.0/256.0*x_5;
}
