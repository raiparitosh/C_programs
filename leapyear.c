                      //WAP to check for a leap year

#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter the year you want to check\n");
    scanf("%d",&year);
   /* if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
                printf("%d is a leap year",year);
            else
                printf("%d is not a leap year",year);
        }
        else
            printf("% d is a leap year",year);
    }
    else
        printf("%d is not a leap year",year);*/
     if(year%100==0)
     {
         if(year%400==0)
            printf("Leap year");
         else
            printf("Not a Leap year");
     }
     else
     {
         if(year%4==0)
            printf("Leap year");
         else
            printf("Not a Leap year");
     }

    return 0;

}

/* temp=year;
    for(i=0;i<2;i++)
    {
        last=temp%10;
        sum=sum+last;
        temp=temp/10;
    }
    if(sum>0)
    {
        a=year%4;
        if(a==0)
            printf("leap year");
    }
    else if(sum==0)
    {
        b=year%400;
        if(b==0)
            printf("leap year");
    }
    else
        printf("Not a leap year");*/
