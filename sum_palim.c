#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c=0,d=0,r;
    printf("\n enter the number:\t");
    scanf("%d",&a);
    for(;a!=0;a=a/10){
      r=a%10;
      d=d+r;
  }
  printf("Sum of digits of number:  %d",d);
    for(c=0;d!=0;)
    {
        b=d%10;
        c=c*10+b;
        d=d/10;
    }

    printf("\n the reversed number is:\t%d",c);
    if(d=c){
        printf("\nthe sum of the number palindrome");
    }
    else
        printf("\nthe sum of the number  not palindrome");
    return 0;
}

