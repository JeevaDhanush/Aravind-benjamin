#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[20],t;
    int i;
    puts("enter the string to be swap ");
    gets(a);
    for(i=0;i<strlen(a);i=i+2)
    {
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }
    printf("\n the swaped string is :%s",a);
    return 0;
}
