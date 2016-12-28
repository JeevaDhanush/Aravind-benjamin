#include<stdio.h>
#include<conio.h>
void main()
{
    char a[10];
    printf("\n enter the string:\t");
    scanf("%s",&a);
    if(a[0]>'0' && a[0]<'9')
        puts("the entered string is an numeric");
    else
        puts("it is not an numeric");
        return 0;
}

