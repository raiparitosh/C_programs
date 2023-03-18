                        //WAP to write in a file using fwrite()

#include<stdio.h>
#include<conio.h>
struct book
{
    int bookid;
    char title[25];
    float price;
};
void main()
{
    struct book b1;
    FILE *fp;
    fp=fopen("f.txt","ab");
    printf("Enter bookid, title and price\n");
    scanf("%d",&b1.bookid);
    fflush(stdin);
    gets(b1.title);
    scanf("%f",b1.price);
    fwrite(&b1,sizeof(b1),1,fp);
    fclose(fp);
    getch();
}

