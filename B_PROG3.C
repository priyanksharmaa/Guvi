#include<stdio.h>
void main(){
 char n;
 scanf("%c",&n);
 if((n>=65 && n<=90 )|| (n>=97 && n<=122))
   {
     if(n=='a'|| n=='A' || n=='e' || n== 'E' || n=='i' || n=='I' ||n=='o' ||n=='O' || n=='u' || n=='U')
       {
	 printf("Vowel");
       }
     else
       {
	printf("Consonent");
       }
   }
 else
  {
   printf("Please enter a albhabet ");
  }
  getch();
}