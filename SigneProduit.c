#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int a,b ;
  printf("Entrer un nombre a:");
  scanf("%d", &a);
  printf("Entrer un nombre b:");
  scanf("%d", &b);
  
  if(a>0 && b>0)
  {
    printf("Leur produit est positif");
  }
  else if(a<0 && b>0)
        {
          printf("Leur produit est negatif");
        }
       else if(a>0 && b<0)
             {
               printf("Leur produit est negatif");
             }
             else if(a<0 && b<0)
                   {
                      printf("Leur produit est positif");
                   }
 return (0);
}
