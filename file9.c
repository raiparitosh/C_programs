                            //WAP to read the content of a file using fscanf()
#include<stdio.h>
int main()
{
    FILE *fp;
    int a,b,c;
    fp=fopen("f.txt","r");
    fscanf(fp,"%d%d%d",&a,&b,&c);

  //  fscanf(fp,"%d,%d,%d",&a,&b,&c);      //for reading data with comma in the file
    printf("a=%d b=%d c=%d",a,b,c);
    fclose(fp);
    return 0;
}
