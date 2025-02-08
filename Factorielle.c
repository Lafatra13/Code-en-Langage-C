#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N,i;
  int F=1;
  printf("Entrer un nombre:");
  scanf("%d",&N);
  
  for(i=1;i<N;i++)
  {
    F=F*i;
  }
  
  printf("%d!=%d\n\n",N,F);
return (0);
}
