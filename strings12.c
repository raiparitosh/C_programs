#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char s1[10],s2[10];
    printf("Enter to strings\n");
    gets(s1);
    strcpy(s2,s1);
    printf(" s2 is %s",s2);
}
