                                         //wap to calculate length of string

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s[100]/*="rai paritosh"*/;
    int i=0;
    printf("Enter a string\n");
    gets(s);
    printf("You Entered\n");
    puts(s);

     /* for(i=0;s[i]!='\0';i++);*/

    while(s[i]!='\0')
    {
        i++;
    }
    printf("Length of string is %d",i);

   /* i=strlen(s);
    printf("Length of string is %d",i);*/

    getch();
    return 0;
}
