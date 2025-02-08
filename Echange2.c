#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int A, B, X;
 printf("Entrer un nombre A:") ;
 scanf("%d", &A) ;
 printf("Entrer un nombre B:") ;
 scanf("%d", &B) ;
 
 X=A;
 A=B;
 B=X;
 
 printf("La nouvelle valeur de A est %d et B est %d\n\n",A, B) ;
  
 return (0);
}
    
