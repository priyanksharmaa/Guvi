#include<stdio.h>
void main()
{
 int n,nr,r,f=0;
 scanf("%d",&n);
 if(n<=1000)
 {
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
    printf("\nNo");
 }
 else
    printf("No u entered is more than 1000 ");

 getch();
}
