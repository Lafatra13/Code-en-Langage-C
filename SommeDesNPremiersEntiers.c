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
    S=S+i;
    printf("%d",i) ;
    if(i<(N-1)) 
    {
      printf("+") ;
    }  
  }
  S=S+N;
  printf("+%d=%f",N, S) ;
  
 return (0);
}
    
