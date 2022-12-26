#include <stdio.h>
int main (){
    //entrada consiste em 3 linhas.
    //a primeira contém dois números N e M
    //N é a quantidade de números na segunda linha
    //M é a quantidade números na terceira linha
    // o programa devolve a diferença simétrica em ordem crescente
    //exemplo de entrada: 3 2 enter 1 2 3 enter 2 3

    int arrayn[50], i=0, j=0, totaln, totalm, arraym[50];

    //construção dos vetores

    scanf("%d", &totaln);
    scanf("%d", &totalm);
    
    for (i = 0; i < totaln;i++){
        scanf ("%d", &arrayn[i]);    
    }

    for (i = 0; i < totalm;i++){
        scanf ("%d", &arraym[i]);    
    }
    
    // início da ordenação

    for (i = 0; i < totaln; i++){
        for (j = i; j < totaln; j++){
            if (arrayn[i] > arrayn[j]){
                int temp = arrayn[i];
                arrayn[i] = arrayn[j];
                arrayn[j] = temp;
            }
        }
    }
    
    
    for (i = 0; i < totalm; i++){
        for (j = i; j < totalm; j++){
            if (arraym[i] > arraym[j]){
                int temp = arraym[i];
                arraym[i] = arraym[j];
                arraym[j] = temp;
            }
        }
    }
    
    
    //fim da ordenação
    
    i = 0;
    j = 0;
    while (i < totaln && j < totalm){
        if (arrayn[i] < arraym[j]){
            printf("%d ", arrayn[i]);
            i++;
        }
        else if (arrayn[i]> arraym[j]){
            printf("%d ", arraym[j]);
            j++;
        }
        else {
            i++;
            j++;
        }
    }
    while(i < totaln){
        printf("%d ", arrayn[i]);
        i++;
    }
    while(j < totalm){
        printf("%d ", arraym[j]);
        j++;
    }


    return 0;
}