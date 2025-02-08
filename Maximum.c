#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int a,b,c;
  printf("Entrer un nombre a:") ;
  scanf("%d", &a) ;
  printf("Entrer un nombre b:") ;
  scanf("%d", &b) ;
  printf("Entrer un nombre c:") ;
  scanf("%d", &c) ;
 
  if(a>b && a>c) 
  {
    printf("Le nombre a est maximum\n") ;
  }
  else if(b>a && b>c) 
        {
          printf("Le nombre b est maximum\n") ;
        }
        else if(c>a && c>b) 
              {
                printf("Le nombre c est maximum\n") ;
              }
 return (0);
}
    
