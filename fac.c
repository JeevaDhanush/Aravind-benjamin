#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b=1,i;
    printf("\n enter the number to be factorial:");
    scanf("%d",&a);
    for(i=1;i<=a;++i)
    {
        b=b*i;
    }
    printf("\n the answer is %d",b);
}
