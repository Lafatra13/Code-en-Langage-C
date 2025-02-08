#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int N, i;
    printf("Entrer un nombre:") ;
    scanf("%d", &N) ;
    
  for(i=1;i<N;i++) 
  {
    printf("On a:") ;
    printf(" ", i) ;
  }
  
 return (0);
}
    