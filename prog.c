#include<stdio.h>
void main()
{
 int n,i;
 scanf("%d",&n);
 if(n>=1 && n<=10000)
    {
      if(n%2==0)
        {
          printf("Even");
        }
      else
        {
          printf("Odd");
        }
     }
  else
    {
      printf("no out of bound ");
    }
}