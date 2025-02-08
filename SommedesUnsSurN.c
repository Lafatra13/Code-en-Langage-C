#include <stdio.h>
#include <stdlib.h>

int main ()
{

  int N, i;
  double S=0;
    printf("Entrer un nombre:") ;
    scanf("%d", &N) ;
    
  for(i=1;i<N;i++) 
  {
    S=(1/i) +S;
    printf("1/%d",i) ;
    if(i<(N-1)) 
    {
      printf("+") ;
    }  
  }
  
  S=S+(1/N);
  printf("+1/%d=%f",N, S) ;
  
 return (0);
}
    
