#include <stdio.h>
int main ()
{
  float avg;
  float dist,time;
  printf("Enter distance in meters");
  scanf("%f",&dist);
  printf("Enter time taken");
  scanf("%f",&time);
  avg=dist/time;
  printf("The Average Speed is %.2f \n",avg);
}

