#include <stdio.h>
int main(){

    //recebe "12.00enter11.00enter10.50enter-1"
    //o -1 é a condição de parada
    //o primeiro valor é a duração máxima para a classificação
    //devolve o número de atletas aptos a competir 
    //como a piscina só tem oito raias o programa devolve a quantidade de
    //séries necessárias para a realização da prova
    
    float resultado, minimo;
    int soma;
    soma = 0;
    scanf ("%f", &minimo);
    do {
        scanf("%f", &resultado);
        if (resultado <= minimo && (double) resultado != (double)-1){
            soma++;
        }
        } while ((double) resultado != (double)-1);
    printf ("%d", soma);
    if (soma == 0){
        printf(" 0");
    }
    else if (soma > 8 && soma % 8 != 0){
        printf(" %d", soma / 8 + 1);
    }
    else if (soma > 8 && soma % 8 == 0){
        printf(" %d", soma / 8);
    }
    else {
        printf(" 1");
    }

    return 0;
} 