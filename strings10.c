                                     //wap to check weather the string is palindrome or not
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    /* char str[50],ch;
    int i,l;
    printf("Enter a string\n");
    gets(str);
    for(l=0;str[l]!='\0';l++);
    for(i=0;i<l/2;i++)
    {
       if(str[i]!=str[l-1-i])
       {
           printf("%s is not palindrome",str);
           return 0;
       }
    }
    printf("%s is palindrome",str);

    getch();
    return 0;
}*/

    int isPalindrome(char s[]);
    char str[50],ch;
    int i,l;
    printf("Enter a string\n");
    gets(str);
    if(isPalindrome(str))
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
    int isPalindrome(char s[])
    {
        int l,i;
        l=strlen(s);
        for(i=0;i<l/2;i++)
        {
           if(s[i]!=s[l-1-i])
               return 0;
        }
        return 1;
    }



