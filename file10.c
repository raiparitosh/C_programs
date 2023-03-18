                                        //WAP to copy the content of one file into another

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("f1.txt","r");
    if(fp1==NULL)
    {
        printf("File not found");
        exit(1);
    }
    fp2=fopen("f2.txt","w");
    if(fp2==NULL)
    {
        printf("File not found");
        exit(1);
    }
   // for(ch=fgetc(fp1);ch!=feof;ch=fgetc(fp1))
    while((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    printf("Content copied successfully");
    return 0;
}

