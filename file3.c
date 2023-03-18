                        //WAP to read content from a file and display on the screen

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("f1.txt","r");
    if(fp==NULL)
    {
        printf("File cannot be opened");
        exit(1);
    }
    ch=fgetc(fp);
    while(!feof(fp))
    {
        printf("%c",ch);
        ch=fgetc(fp);
    }
    fclose(fp);
    getch();
    return 0;
}
