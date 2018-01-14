#include<stdio.h>
#include<conio.h>
void main()
{
 int n,f=0;
 scanf("%d",&n);
 if(n<=1000)
 {
  for(int i=2; i<=n-1 ; i++)
    {
      if(n%i==0)
	 f++;
   }
  if(f==0)
   printf("prime no ");
  else
   printf("no");
 }
 else
  printf("no should be less than 1000");
 getch();
 }