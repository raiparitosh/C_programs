                           //WAP for writing in a file using fprintf()

#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    int a,b;
    fp=fopen("f1.txt","w");
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);

    //printf("Sum of %d and %d is %d",a,b,a+b);  //this will display the output on the output screen

    fprintf(fp,"sum of %d and %d is %d",a,b,a+b);  //this will print the result in the file
    fclose(fp);
    getch();
    return 0;
}

