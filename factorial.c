 #include<stdio.h>
 #include<conio.h>
 int main()
{
    int fact=1,i,n;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=n;i>0;i--)
      {
         fact=fact*i;
      }
    printf("factorial of %d is %d",n,fact);
    getch();
    return 0;
}
