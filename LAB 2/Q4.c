#include <stdio.h>
int main ()
{
  float fahr;
  float cels;
  printf("Enter Degrees Fahrenheit");
  scanf("%f",&fahr);
  cels=(fahr-32)*5/9;
  printf("Degrees Celsius is %f \n",cels);
}

