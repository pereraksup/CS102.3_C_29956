#include<stdio.h>
int main()
{
float bsalary,msalary,gross;
int syear;
char city;

printf("Enter Basic salary");
scanf("%f",&bsalary);
printf("Enter Year of salary");
scanf("%c",&city);
printf("Enter Monthly salary");
scanf("%f",&msalary);

if(syear>5)
    gross=bsalary+bsalary*10/100;
else
    gross=bsalary;

    if(msalary<25000)
        gross=gross=msalary*10/100;
    else if(msalary<50000)
    gross=gross=msalary*12/100;
    else
        gross=gross=msalary*15/100;

    printf("Gross=%2f\n",gross);

}

