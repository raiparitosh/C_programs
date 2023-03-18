                         //WAP to write hello students in a file

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i;
    FILE *fp;
    char s[]="hello students";
    fp=fopen("f1.txt","w");
    if(fp==NULL)
    {
        printf("File cannot be opened");
        exit(1);
    }
    for(i=0;i<strlen(s);i++)
        fputc(s[i],fp);
    fclose(fp);
    getch();
    return 0;
}
