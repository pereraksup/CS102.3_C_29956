#include<stdio.h>
int main()
{
    int radius,diameter;
    float circumference,area,constantvalue;

    printf("The Radius of the circle");
    scanf("%d",&radius);

    diameter=2*radius;
    constantvalue=3.14159;
    circumference=2*constantvalue*radius;
    area=constantvalue*radius*radius;

    printf("Diameter of a circle %d\n",diameter);
    printf("Circumference of a Circle %f\n",circumference);
    printf("Area of a Circle %f\n",area);
}


