#include<stdio.h>
#include<conio.h>
int main()
{
    int a=8 , b=2 , c=5;
    float d=9.2 , e=10.2;
    printf("a divided by b=%d",a/b);
    printf("\n a added to b = %d",a+b);
    printf("\n a modulus c = %d",a%c);
    printf("\n a<b = %d",a<b);
    printf("\n a>=e is %d",a>=e);
    printf("\n less than or equal to d =%d",b<=d);
    printf("\n d<e && c>b = %d",(d<e)&&(c>b));
    printf("\n e>b || c>a = %d",(e>b)||(c>b));
    printf("\n NOT operation = %d",!(b==2));
    getch();



}