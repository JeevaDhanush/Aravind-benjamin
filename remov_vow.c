#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[50],*b,str[20];
    int i,j=0;
    printf("\n enter the string to be reversed:\t");
    scanf("%s",a);
    printf("\n the reversed string is :\t%s",b=strrev(a));
    for(i=0;i<=strlen(a);i++) {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u' ||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                str[i]=' ';
        else
                str[j++]=a[i];
    }
    str[j]='\0';
    printf("\nThe string without vowel is\t%s",str);
    return 0;
}
