                                 //wap to count vowels in a string

#include<stdio.h>
#include<conio.h>
int main()
{
    char s[50];
    int i=0,count=0;
    printf("Enter a string\n");
    gets(s);
    while(s[i]!='\0')
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            count++;
        i++;

    }
    printf("Number of vowels in the string is %d",count);
    getch();
    return 0;
}

