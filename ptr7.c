                          //WAP to calculate length of string using pointers

#include<stdio.h>
#include<conio.h>
int main()
{
    char s[50],*p;
    int i,count=0;
    printf("Enter a string\n");
    gets(s);
    printf("You Entered :-");
    puts(s);
    p=&s[0];
    for(i=0;p[i];i++);
    printf("Length of string is %d",i);
/*    while(*p!='\0')
    {
        count++;
        p++;
    }
    printf("Length of string is %d",count);*/
    getch();
    return 0;
}


/*#include<stdio.h>
#include<conio.h>
int length(char *);
int main()
{
    char str[25];
    int l;
    printf("Enter a string\n");
    gets(str);
    l=length(str);
    printf("Length of string is %d",l);
    getch();
}
int length(char *p)
{
    int i;
    for(i=0;p[i];i++);
    return i;
}*/
