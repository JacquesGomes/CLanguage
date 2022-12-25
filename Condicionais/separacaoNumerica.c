#include <stdio.h>
int main(){

    //Recebe um número qualquer e imprime os algarismos separadamente, do primeiro até o último
    int numero;

    scanf("%d", &numero);

    if (numero>99999)
    {
            printf("%d\n", numero/100000);
            printf("%d\n", numero/10000 %10);
            printf("%d\n", numero/1000 %10);
            printf("%d\n", numero/100%10);
            printf("%d\n", numero/10%10);
            printf("%d\n", numero/1%10);
    }

    if (numero<99999 && numero>9999)
    {
            printf("%d\n", numero/10000);
            printf("%d\n", numero/1000 %10);
            printf("%d\n", numero/100 %10);
            printf("%d\n", numero/10%10);
            printf("%d\n", numero/1%10);
    }    
    
    if (numero<9999 && numero>999)
    {
            printf("%d\n", numero/1000);
            printf("%d\n", numero/100 %10);
            printf("%d\n", numero/10 %10);
            printf("%d\n", numero/1%10);
    }    
      
    if (numero<999 && numero>99)
    {
            printf("%d\n", numero/100);
            printf("%d\n", numero/10 %10);
            printf("%d\n", numero/1 %10);
    }    
      
    if (numero<99 && numero>9)
    {
            printf("%d\n", numero/10);
            printf("%d\n", numero/1 %10);
    }    
    
    if (numero<10)
    {
            printf("%d\n", numero);
    }    
    return 0;
}