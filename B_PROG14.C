#include<stdio.h>
void main()
{
 int n1,n2, i;
 scanf("%d %d",&n1,&n2);
 if(n1<=100000&& n2<=100000)
 {
 for(i=n1+1;i<n2;i++)
  {
   if(i%2==1)
     printf(" %d ",i);
  }
 }
 else
   printf("one of the no is greater than 100000");
 getch();
}