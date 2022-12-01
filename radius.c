#include <stdio.h>
#include <math.h>

double calculate_radius( double area);

int main()
{
  double my_area = 2.0;

  printf("A circle of area %f m^2 has a radiys of %f m\n", my_area, calculate_radius(my_area) );

}

double calculate_radius( double area)
{
  double pi = 3.14159265;

  return sqrt( area/pi);
}
