#include <stdio.h>
int main()
{
 int ch,n_1,n_2,add,sub,mult;
 float div;
 printf("Menu:\n");
 printf("1.Addition\n");
 printf("2.Subtraction\n");
 printf("3.multiplication\n");
 printf("4.Divition\n");
 printf("Enter your choice:\n");
 scanf("%d",&ch);
 printf("Enter first value:\n");
 scanf("%d",&n_1);
 printf("Enter second value:\n");
 scanf("%d",&n_2);
 add=n_1+n_2;
 sub=n_1-n_2;
 mult=n_1*n_2;
 div=n_1/n_2;
 switch(ch)
 {
 case 1:printf("addition = %d\n",add);break;
 case 2:printf("subtraction = %d\n",sub);break;
 case 3:printf("Multiplication = %d\n",mult);break;
 default:printf("divition = %f\n",div);
 }
 return 0;
}

