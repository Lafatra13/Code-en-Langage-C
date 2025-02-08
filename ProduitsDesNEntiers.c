#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int N, i;
  double P=1;
    printf("Entrer un nombre:") ;
    scanf("%d", &N) ;
    
  for(i=1;i<N;i++) 
  {
    P=i*P;
    printf("%d",i) ;
    if(i<(N-1)) 
    {
      printf("*") ;
    }  
  }
  P=P*N;
  printf("*%d=%f ",N, P) ;
  
 return (0);
}
    
