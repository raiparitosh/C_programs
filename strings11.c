                                  //wap to check that the string is alphanumeric or not

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,l,alphabet,digit;
    printf("Enter a string");
    gets(str);
    l=strlen(str);
    for(i=0;i<=l;i++)
    {
        if(str[i]>='a'&&str[i]<='z' || str[i]>='A'&&str[i]<='Z')
            alphabet=1;
        if(str[i]>='0'&&str[i]<='9')
            digit=1;
    }
    if(alphabet==1&&digit==1)
          printf("%s is alphanumeric",str);
    else
          printf("%s is not alphanumeric",str);
    getch();
    return 0;
}
