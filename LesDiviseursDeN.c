#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int N, i;
    printf("Entrer un nombre:") ;
    scanf("%d", &N) ;
    printf("Les diviseurs de N sont:") ;
  
  for(i=1;i<N;i++) 
  {
    
    if(N % i== 0) 
    {
      printf("%d ",i) ;
    }
  }
  
 return (0);
}
    
