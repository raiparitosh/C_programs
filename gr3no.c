#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 printf("enter 3 numbers\n");
 scanf("%d%d%d",&a,&b,&c);
 /*if(a>b&&a>c)
  printf("%d is greatest",a);
 else if(b>a&&b>c)
  printf("%d is greatest",b);
 else
  printf("%d is greatest",c);
  if(a>b)
  {
      if(a>c)
        printf("%d is greatest",a);
  }
  else
    {
    if(b>a)
  {
    if(b>c)
      printf("%d is greatest",b);
  }
    else
        {
        if(c>a)
        {
            if(c>b)
              printf("%d is greatest",c);
        }
    }
    }
  getch();
}
*/
if(a>b)
{
    if(a>c)
        printf("%d is greatest",a);
else
    printf("%d is greatest",c);
}
else
{
    if(b>c)
    printf("%d is greatest",b);
    else
    printf("%d is greatest",c);
}
getch();
}
