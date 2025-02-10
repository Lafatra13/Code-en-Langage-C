#include <stdio.h>
#include <stdlib.h>

int main ()
{

  int N, i;
  double F=1,S=0;
    printf("Entrer un nombre:") ;
    scanf("%d", &N) ;
    
  for(i=1;i<=N;i++) 
  {
    F=F*i;
    S=S+F;
    printf("%d!",i) ;
    if(i<N) 
    {
      printf("+") ;
    }  
  }
  printf("=%f", S) ;
  
 return (0);
}
