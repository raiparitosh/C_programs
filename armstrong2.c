                                       //armstrong number program

#include<stdio.h>
#include<conio.h>
int main()
{
 int n,temp,count=0,rem,p=1,output=0,c,new_count;
 printf("enter the number\n");
 scanf("%d",&n);
 temp=n;
 while(n!=0)
  {
   n=n/10;
   count++;
  }
  c=count;
  n=temp;
  while(count>0)
   {
    rem=n%10;
    n=n/10;
    p=1;
    new_count=c;
    while(new_count>0)
     {
      p=p*rem;
      new_count--;
     }
    output=output+p;
    count--;
   }
  if(output==temp)
   printf("%d is a armstrong number",temp);
  else
   printf("%d is not a armstrong number",temp);
 getch();
 return 0;
}
