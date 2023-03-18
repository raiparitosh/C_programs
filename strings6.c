                             //wap to reverse the string using strrev and without strrev fxn
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[100],ch;
    int l,i;

    printf("Enter a string");
    gets(str);

    /*strrev(str);                                           //using strrev fxn
    puts(str);*/

    for(l=0;str[l]!='\0';l++);                                     //without using strrev fxn

    printf("Length of string is %d\n",l);
    for(i=0;i<l/2;i++)
    {
        ch=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;
    }
    printf("Reverse is\n%s",str);
    getch();
    return 0;
}



