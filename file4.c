                      //WAP to read data from file using fgets() fxn and display it on screen

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char s[100];
    fp=fopen("f1.txt","r");
    if(fp==NULL)
    {
        printf("File cannot be opened");
        exit(1);
    }
    while(fgets(s,5,fp)!=NULL)
   // while(fgets(&s[0],5,fp)!=NULL)
    {
        printf("%s",s);
    }
    fclose(fp);
    getch();
    return 0;
}
