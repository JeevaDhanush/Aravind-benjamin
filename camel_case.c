#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char a[20];
   int i;
   printf("\n enter the string:");
   scanf("%s",a);
   for (i=0;i<a[i]!='\0';i++)
   {
       if(a[0]>='a' && a[0]<='z')
           a[0]=a[0]-32;
   }
   printf("\n the camel case string is:%s",a);
   return 0;
}
