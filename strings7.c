                   //WAP to convert a string into uppercase and lowercase using predefined fxn and without using predefined fxn
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[50];
    int i;
    printf("Enter a string\n");
    gets(str);
    /*strupr(str);
    puts(str);
    strlwr(str);
    puts(str);*/

    //for lowercase
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    }
    printf("%s",str);

    //for uppercase
    printf("Enter a string\n");
    gets(str);
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    }
    printf("%s",str);
    getch();
    return 0;
}
