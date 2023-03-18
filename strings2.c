                                  //for better understanding
#include<stdio.h>
#include<conio.h>
int main()
{
    char s[]="toshu rai";
    int i=0;

    puts("hello");

    while(s[i]!='\0')
    {
        printf("%c",s[i]);
        i++;
    }

    for( int i=0;s[i]!='\0';i++)
    printf("%c",s[i]);

    puts(s);

    printf("%s",s);

    getch();
    return 0;
}

