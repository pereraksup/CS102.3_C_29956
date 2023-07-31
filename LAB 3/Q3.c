#include<stdio.h>
int main()
{
    char empname[21];
    float bs,inc,ns;
    //input employee name,basic salary
    printf("Enter Employee Name");
    scanf("%s",&empname);
    printf("Enter Basic salary");
    scanf("%f",&bs);
    //process(if)
    if(bs>=10000)
        inc=bs*0.15;
    else if(bs>=5000)
        inc=bs*0.10;
    else
        inc=bs*0.05;
    //output employee name with new salary;
    ns=bs+inc;
    printf("Employee Name %s\n",empname);
    printf("New salary %2f\n",ns);
}

