#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a, b, r, pgcd;
 
 printf("Entrer un nombre a:");
 scanf("%d", &a);
 printf("Entrer un nombre b:");
 scanf("%d",&b);
 
 while(r!=0)
 {
   r=a%b;
   a=b;
   b=r;
 }
 pgcd=a;

  if(pgcd==1)
  {
    printf("Ils sont premiers entre eux");
  }
  else
  {
    printf("Ils ne sont pas premiers entre eux");
  }
 return (0);
}
