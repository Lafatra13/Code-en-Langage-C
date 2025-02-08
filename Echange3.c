#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int A, B,C, X;
 printf("Entrer un nombre A:") ;
 scanf("%d", &A) ;
 printf("Entrer un nombre B:") ;
 scanf("%d", &B) ;
 printf("Entrer un nombre C:") ;
 scanf("%d", &C) ;
 
 X=A;
 A=B;
 B=C;
 C=X;
 
 
 printf("La nouvelle valeur de A est %d ,B est %d et C est %d\n\n", A, B, C) ;
  
 return (0);
}
    
