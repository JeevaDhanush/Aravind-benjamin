#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,a;
    printf("enter the number:\t" );
    scanf("%d",&n);
    for(i=n;i>=1;i--){
            for(a=0;a<i;a++){
        printf("*");}
         printf("\t");
        for(a=1;a<=i;a++)
        {
            printf("*");
        }
        printf("\n");
}    return 0;
}
