#include <stdio.h>
int main()
{
 char v;
 printf("Enter a character:\n");
 scanf("%c",&v);
 switch(v)
 {
 case 'a':printf("It is a vowel");break;
 case 'e':printf("It is a vowel");break;
 case 'i':printf("It is a vowel");break;
 case 'o':printf("It is a vowel");break;
 case 'u':printf("It is a vowel");break;
 default:printf("It is not a vowel");
 }
 return 0;
}

