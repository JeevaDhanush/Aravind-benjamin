#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("\n enter the number");
	scanf("%d",a);
	if(a==0)
	{
		printf("\n the number is zero");
	}
	if(a>0)
	{
		printf("\n the number is positive");
	}
	else
	{
		printf("\n the number is negative");
	}
}