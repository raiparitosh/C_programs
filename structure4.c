                             //WAP to store details of 5 book and print the stored details

#include<stdio.h>
#include<conio.h>

struct book
{
    int bookid;
    char title[25];
    float price;
};
struct book input();
void display(struct book);

int main()
{
    struct book b[5];
    int i;
    for(i=0;i<=4;i++)
        b[i]=input();
    for(i=0;i<=4;i++)
        display(b[i]);
    getch();
    return 0;
}

struct book input()
{
    struct book  b;
    printf("Enter bookid,title,price\n");
    scanf("%d",&b.bookid);
    fflush(stdin);
    gets(b.title);
    scanf("%f",&b.price);
    return b;
}
void display(struct book b)
{
    printf("\n%d %s %f",b.bookid,b.title,b.price);
}

