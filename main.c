#include <stdio.h>
#include <stdlib.h>

  int main()
{
    int facto,i,n;
    facto=1;
    printf("entrer un nombre:");
    scanf("%d",&n);
    for(i=n;i>0;i--)
        facto = facto * i;
    printf("%d! = %d",n,facto);

}
