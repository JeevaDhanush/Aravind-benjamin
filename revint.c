#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c=0;
    printf("\n enter the integer to be reversed:\t");
    scanf("%d",&a);
    do
    {
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    while(a!=0);
    printf("\n the reversed integer is:\t%d",c);
    return 0;
}
