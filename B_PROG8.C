#include<stdio.h>
void main()
{
 int n, i, f=0;
 scanf("%d",&n);
 if(n<=0)
 printf("Enter no greater than 0");
 else
 {
   for(i=1;i<=n;i++)
     {
       f=f+i;
     }
   printf("%d",f);
  }
getch();
}