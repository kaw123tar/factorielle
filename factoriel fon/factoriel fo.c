#include <stdio.h>
#include <stdlib.h>
int factorielle(int x)
{
   int fact,a;
       fact=1;
   for(a=1;a<=x;a++)
    fact=fact*a;
       return fact;
    }

  int main()
{
    int n;
do{
     printf(" entre un nombre pour calculer sa factorielle :");
     scanf("%d",&n);
     }
     while(n<0);
     printf("la factorielle de %d! = %d " ,n ,factorielle(n));

}
