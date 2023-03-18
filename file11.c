                          //WAP to count the number of lines in a file

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    int n=1;
    fp=fopen("f1.txt","r");
    if(fp==NULL)
    {
        printf("File not found");
        exit(1);
    }
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch=='\n')
            n=n+1;
    }
    fclose(fp);
    printf("Number of lines in the file are %d",n);
    return 0;
}

