                     //WAP to take a string from user and write it into a file

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char s[100];
    int i;
    fp=fopen("f1.txt","w");
    if(fp==NULL)
    {
        printf("File cannot be opened\n");
        exit(1);
    }
    printf("Enter a string\n");
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        fputc(s[i],fp);
    }
    getch();
    fclose(fp);
    getch();
    return 0;
}
