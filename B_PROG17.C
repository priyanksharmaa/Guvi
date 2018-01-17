#include<stdio.h>
#include<math.h>
void main()
{
 int n,m,p,s=0,x;
 scanf("%d",&n);
 if(n<=100000)
 {
 m=floor(log10(abs(n)))+1;
 x=n;
 while(n!=0)
   { p=n%10;
     s=s+ pow(p,m);
     n=n/10;
   }
 if(x==s)
   printf("yes");
  getch();
}
}