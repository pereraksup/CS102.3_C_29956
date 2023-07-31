#include<stdio.h>;
int main()
{
    int p,q,r;
    printf("Enter First Number");
    scanf("%d",&p);
    printf("Enter Second Number");
    scanf("%d",&q);
    printf("Enter Third Number");
    scanf("%d",r);
    printf("before swapping p=%d,q=%d",p,q);
    r=p;
    p=q;
    q=r;
