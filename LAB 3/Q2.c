#include <stdio.h>
int main()
{
    int num1,num2,num3,largest,smallest;
    printf("Enter three number");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>num2)
        largest=num1;
    else
        if(num2>num3)
        largest=num2;
    else
        largest=num3;

    if (num1<num2)
        smallest=num1;
    else
        if(num2<num3)
        smallest=num2;
    else
        smallest=num3;
    printf("The largest is %d\n",largest);
    printf("The smallest is %d\n",smallest);
}

