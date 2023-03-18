                       //wap to compare two strings with and without using predefined fxns

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50];
    int i,flag=0;
    printf("Enter two strings");
    gets(s1);
    gets(s2);
    /*for(i=0;s1[i]!='\0' || s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Both strings are same");
    else
        printf("Both strings are not same");*/


      i=strcmp(s1,s2);
      if(i==0)
        printf("Both strings are same");
      else
        printf("Both strings are not same");
getch();
return 0;
}
