#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int N, i;
    printf("Entrer un nombre:") ;
    scanf("%d", &N) ;
    printf("Les nombres pairs dans 1 à %d sont:",N);
  
  for(i=1;i<N;i++) 
  {
    if(i % 2== 0) 
    {
      printf("%d ",i) ;
    }
  }
  
 return (0);
}
    
