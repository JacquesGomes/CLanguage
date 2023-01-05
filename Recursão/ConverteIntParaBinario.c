//recebe um int e devolve em formato binário

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int entrada;
    scanf(" %d", &entrada);
    
    int magic(int num){
        if((num / 2) != 0){
            magic(num/2);
        }
        printf("%d", num%2);
    }
    
    magic(entrada);

    return 0;
    
}