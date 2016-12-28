#include<stdio.h>
#include<conio.h>
void main()
{
    char a[20];
    puts("enter the character:\t");
    gets(a);
    if(a[0]>'a' && a[0]<'z')
        puts("the entered character is an alphabet");
    else
        puts("it is not an alphabet");
        return 0;
}
