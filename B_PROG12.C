#include<stdio.h>
void main()
{
 int n,nr,r,f=0;
 scanf("%d",&n);
 r=n;
 while(r!=0)
  {
    nr=r%10;
    f=f*10+nr;
    r=r/10;
  }
 if(n==f)
    printf("\nYes");
 else
    printf("\No");
 getch();
}