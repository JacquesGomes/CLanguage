#include <stdio.h>
//recebe um número e uma séries de outro
//o primeiro número determina o número da sequência subsequente
//o programa checa se a diferença de um número com o seu
//antecessor é par ou não
// se for par sempre, retorna "Legal", caso contrário retorna "Chato"
//ex entrada: 5 enter 2 enter 5 enter 5 enter -3 enter 5 enter

    int ehchato(int vetor[], int total){
        int i, j;
        for (i=0; i<total-1; i++){
            if ((vetor[i] - vetor[i+1]) % 2 == 0){
                j++;
            }

        }
        if (j == total-1){
            return printf ("Legal");
        }
        else {
            return printf ("Chato");
        }

    }


    int main (){
    int total, i;
    scanf("%d", &total);
    int vetor[total];
    for (i=0; i<total; i++){
        scanf("%d", &vetor[i]);
    }
    ehchato(vetor, total);
    return 0;
}

