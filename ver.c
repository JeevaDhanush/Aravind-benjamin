#include<stdio.h>
#include<conio.h>
void main()
{
 int i;
 char a[100],b[100];
 puts("Enter any string : ");
 gets(a);
 gets(b);
 for(i=0; b[i]!='\0'&&a[i]!='\0'; i++)
   printf("%c\n%c",a[i],b[i]);
 getch();
 return 0;
}
