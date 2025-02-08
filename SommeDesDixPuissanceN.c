#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{

  int N, i;
  double S=0;
    printf("Entrer un nombre:") ;
    scanf("%d", &N) ;
    
  for(i=1;i<N;i++) 
  {
    S=(pow(10,i)) +S;
    printf("10^%d",i) ;
    if(i<N) 
    {
      printf("+") ;
    }  
  }
  S+=pow(10,N);
  printf("10^%d=%g",N,S) ;
  
 return (0);
}
    
