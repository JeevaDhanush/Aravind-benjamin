#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[20],*b;
    printf("\n enter the string to be reversed:\t");
    scanf("%s",a);
    printf("\n the reversed string is:\t%s",b=strrev(a));
    return 0;
}
