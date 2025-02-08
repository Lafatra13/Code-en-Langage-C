#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a, b, r;
 
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
 
 printf("Leur pgcd est %d\n\n",a);
return (0);
}
