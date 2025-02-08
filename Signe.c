#include <stdio.h>

int main()
{
  int N;
  printf("Voulez-vous connaître le signe d'un nombre? \nEntrer le nombre");
  scanf("%d",&N);
  
  if(N<0)
  {
    printf("Ce nombre est negatif");
  }
  else
   {
     printf("Ce nombre est positif");
    }
  return (0);     
}
