#include <stdio.h>

int main()
{
  int N;
  printf("Entrer un nombre");
  scanf("%d",&N);
  
  if(N<0)
  {
    printf("Ce nombre est negatif");
  }
  else if(N>0)
       {
         printf("Ce nombre est positif");
       }
       else 
       {
         printf("Ce nombre est nul");
       }
  return (0);     
}
