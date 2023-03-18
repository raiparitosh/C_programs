                                  // wap to concatenate two strings with and without using predefined fxns
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50];
    printf("Enter two strings\n");
    gets(s1);
    gets(s2);
    //strcat(s1,s2);
    //puts(s1);

    int l1,l2,i;
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0;i<=l2;i++)
    {
        s1[l1+i]=s2[i];
    }
    printf("String after concatenation is %s",s1);
    getch();
    return 0;
}
