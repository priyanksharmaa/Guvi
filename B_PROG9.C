#include<stdio.h>
void main()
{
 int n,k,i,a[20],f=0;
 scanf("%d",&n);
 scanf("%d",&k);
 if(n>0 && k>0)
 {
   for(i=0;i<n;i++)
    {  scanf("%d",&a[i]);}
   for(i=0;i<k;i++)
     {
       f=a[i]+f;
     }
   printf("Sum is %d",f);
 }
 else
   {
    printf("no should be greater than 0");
   }
  getch();
 }