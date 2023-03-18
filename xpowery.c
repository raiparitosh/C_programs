                        //WAP to calculate x raise to the power y

#include<stdio.h>
#include<conio.h>
 int main()
 {
     int num,p,i,output=1;
     printf("Enter the number and its power\n");
     scanf("%d%d",&num,&p);
     for(i=1;i<=p;i++)
     {
         output=output*num;
     }
    /* while(p>=1)
     {
         output=output*num;
         p--;
     }*/
     printf("%d raise to power %d is %d ",num,p,output);
     getch();
     return 0;
 }
