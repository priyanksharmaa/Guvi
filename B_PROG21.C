#include<stdio.h>
#include<math.h>
void main()
{
 int a,d,s;
 float n;
 scanf("%f %d %d",&n,&a,&d);
 s=(n/2)*((2*a)+(d*(n-1)));
 printf("%d",s);
 getch();
}