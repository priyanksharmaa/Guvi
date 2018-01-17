#include<stdio.h>
#include<math.h>
void main()
{
 int n,a,m,p,s,x,i;
 scanf("%d%d",&n,&a);
  for(i=n+1;i<a;i++)
   {s=0;
    m=floor(log10(abs(i)))+1;
    x=i;
    while(x!=0)
     { p=x%10;
       s=s+ pow(p,m);
       x=x/10;
     }
   if(i==s)
      printf(" %d ",i);

}
getch();
}