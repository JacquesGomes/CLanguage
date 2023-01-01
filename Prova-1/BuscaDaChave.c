#include <stdio.h>

//recebe um int e uma sequencia de ints
//retorna: se a soma dos números nas posições pares for maior que a soma dos números na posição impar
//imprime a média aritmética entre o primeiro e o último num
//se a soma das posições ímpares for maior que a dos pares, imprime o número do meio
//caso seja ímpar a sequencia
//a média aritmética dos dois números do meio caso seja uma sequência par


int main (){
    int tamanho, i;
    
    scanf("%d", &tamanho);
    int array[tamanho], arrayimpar[tamanho], arraypar[tamanho];
    int elementofinal;
    elementofinal = tamanho - 1;
    
    // soma dos pares : maior ou igual
    
    for (i = 0; i < tamanho; i++){
        scanf("%d", &array[i]);
    }
    
    // 0 = 1 1 + 2 
    int contadorimpar = 0;
    for (i = 0; i < tamanho; i += 2){
        contadorimpar += array[i];
    }
    
    int contadorpar = 0;
    for (i = 1; i < tamanho; i += 2){
        contadorpar += array[i];
    }
    
    if (contadorpar >= contadorimpar){
        
        printf("%d", (array[0] + array[elementofinal]) / 2);
    }
    
    
    int meio1, meio2;
    meio1 = tamanho /2;
    meio2 = (tamanho / 2) - 1;
    
    if (contadorimpar > contadorpar){
        if (tamanho % 2 == 0){
            printf("%d", (array[meio1] + array[meio2]) / 2);
        }
        else{
            printf("%d", array[tamanho/2]);
        }
    }
    
    
    
}