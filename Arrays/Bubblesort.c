#include<stdio.h>
int main(){

    //recebe um número e depois uma sequeÊncia de números
    //entrada ex: 4 enter 2 4 2 1
    //o primeiro número é a quantidade de números subsequentes
    //depois, vai fazendo o bubble sort e a cada laço
    //imprime a situação corrente, até ordenar em ordem decrescente
    int total, i = 0, temp = 0, j = 0, k = 0;
    scanf("%d", &total);
    int array[total];
    for (i=0; i<total;i++){
        scanf ("%d", &array[i]);
    }
    i=0;
    for (k = 0; k < total; k++){
        printf("%d ", array[k]);
    }
    printf("\n");

    for(i = 0; i < total - 1; i++){
        for(j = 0; j < total - i - 1; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
        for (k = 0; k < total; k++){
            printf("%d ", array[k]);
            }
        printf("\n");
    }

    return 0;
}