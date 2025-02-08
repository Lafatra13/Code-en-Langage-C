#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
 int a,b,c;
 float x1, x2, delta;
 
 printf("Résolution de l'équation ax²+bx+c=0");
 printf("Entrer a:") ;
 scanf("%d", &a) ;
 printf("Entrer b:") ;
 scanf("%d",&b) ;
 printf("Entrer c:") ;
 scanf("%d", &c) ;

 if(a==0) 
 {
  if(b==0) 
  {
    printf("Solution vide\n\n") ;
  }
  else if(b!=0) 
  {
    x1=-c/b ;
    printf("La solution est %f\n\n", x1) ;
  }
 }
 else
 {
  delta=pow(b, 2) -(4*a*c) ;
  
   if(delta==0) 
   {
     x1=(-b) /(2*a) ;
      printf("On a une solution unique :%f\n\n", x1) ;
   } 
     else if(delta>0) 
     {
      x1=(-b+sqrt(delta))/(2*a) ;
      x2=(-b-sqrt(delta))/(2*a) ;
         printf("Les solutions sont %f et %f\n\n", x1, x2) ;
     }
          else if(delta<0) 
          {
              x1=-b/(2*a);
              x2=sqrt(-delta)/(2*a);
               printf("x1= %f + %f i",x1,x2);
               printf("  et x2= %f - %f i\n\n",x1,x2);
          }
 }     
 return 0;
}
