#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int a,b, k1, k2, M;
 printf("Entrer une note :") ;
 scanf("%d", &a) ;
 printf("Entrer son coefficient :") ;
 scanf("%d", &k1) ;
 printf("Entrer l'autre note:") ;
 scanf("%d", &b) ;
 printf("Entrer son coefficient :") ;
 scanf("%d", &k2) ;
 
 M=(a+b) /(k1+k2) ;
 
printf("Leur moyenne est %d\n\n",M) ;
  
 return (0);
}
    
