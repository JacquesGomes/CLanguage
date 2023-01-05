//recebe vários ints (quantidade aleatória), aloca dinamicamente, ordena e imprime
//formato: int int int int ...

#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int tam=0, i, j, aux;
    char ent;
    int *res = NULL;

    while (scanf(" %c", &ent) != EOF){
        ungetc(ent, stdin);
        res = realloc(res, sizeof(int) * (tam + 1));
        scanf(" %d", &res[tam]);
        tam++;
    }

    for(i=0; i<tam; i++){
        for(j=0; j<tam-1; j++){
            if (res[j] > res[j+1]){
                aux = res[j];
                res[j] = res[j+1];
                res[j+1] = aux;
            }
        }
    }

    for (i=0; i<tam; i++){
        printf("%d ", res[i]);
    }

}