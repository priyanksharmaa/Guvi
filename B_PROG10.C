#include<stdio.h>
int i=0;
void main()
{
 int n;
 scanf("%d",&n);
 if(n>0)
 {
  while(n>9)
  {
    n=n/10;
    i++;
  }
 printf("total digit %d",i+1);
 }
 else
  {
   printf("No should b greater than 0");
  }
  getch();
}