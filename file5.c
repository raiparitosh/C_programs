                        //WAP to write a string to a file using fputs()

#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char str[100];
    fp=fopen("f1.txt","w");
    //fp=fopen("f1.txt","a");
    printf("Enter the string you want to write in the file\n");
    gets(str);
    fputs(str,fp);
    //fputs(&str[0],fp);
    fclose(fp);
    getch();
    return 0;
}
