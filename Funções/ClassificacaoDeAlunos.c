#include <stdio.h>
int main(){

    //entrada: primeiro número é a quantidade de alunos
    // depois vem o índice do aluno um traço e a nota
    //entrada ex: 5 enter 1 - 3.2 enter 2 - 9.2 enter ...
    //o programa ordena os aprovados, reprovados e em recuperação
    //maiorigual a 7 aprovado, maior igual a 5 recuperacao, else reprovado

    int total, i = 0, va = 0, vr = 0, vf = 0, iva=0, k = 0, ivr = 0, ivf = 0;
    scanf ("%d", &total);
    int vetorinutil[total];
    char vetorinutil2[total];
    float vetorinicial[total], vetoraprovados[total], vetorrecuperacao[total], vetorreprovados[total];
    
    // recebe o input
    for (i = 0; i < total; i++){
        scanf ("%d %c %f", &vetorinutil[i], &vetorinutil2[i], &vetorinicial[i]);
    }


    //produz o vetor de aprovados
    for (i=0; i< total; i++){
        if (vetorinicial[i] >= 7 && vetorinicial[i] < 11){
            vetoraprovados[va] = vetorinicial[i];
            va++;
        }
    }


    for (i=0; i< total; i++){
        if (vetorinicial[i] < 7 && vetorinicial[i] >= 5){
            vetorrecuperacao[vr] = vetorinicial[i];
            vr++;
        }
    }

    for (i=0; i< total; i++){
        if (vetorinicial[i] < 5 && vetorinicial[i] > -1){
            vetorreprovados[vf] = vetorinicial[i];
            vf++;
        }
    }

    int indiceva[va], indicevr[vr], indicevf[vf];

    // procura o índice do vetor com a nova ordem
    i = 0;

    for (i=0; i< total; i++){
        if (vetorinicial[i] >= 7 && vetorinicial[i] < 11){
            indiceva[iva] = i+1;
            iva++;
        }
    }

        
    i = 0;

    for (i=0; i< total; i++){
        if (vetorinicial[i] < 7 && vetorinicial[i] >= 5){
            indicevr[ivr] = i+1;
            ivr++;
        }
    }

     

    i = 0;

    for (i=0; i< total; i++){
        if (vetorinicial[i] < 5 && vetorinicial[i] > -1){
            indicevf[ivf] = i+1;
            ivf++;
        }
    }

     

    // imprime o vetor de aprovados
    i = 0;

    printf("Aprovados: ");
    for (i = 0; i < va; i++){
        printf("%d (%.1f)", indiceva[i], vetoraprovados[i]);
        while (k < va -1){
            printf(", ");
            k++;
            break;
        }
    }

    printf("\n");
    printf("Recuperação: ");
    i = 0;
    k = 0;

    for (i = 0; i < vr; i++){
        printf("%d (%.1f)", indicevr[i], vetorrecuperacao[i]);
        while (k < vr -1){
            printf(", ");
            k++;
            break;
        }
    }

    printf("\n");
    printf("Reprovados: ");
    i = 0;
    k = 0;

    for (i = 0; i < vf; i++){
        printf("%d (%.1f)", indicevf[i], vetorreprovados[i]);
        while (k < vf -1){
            printf(", ");
            k++;
            break;
        }
    }


    



    return 0;
}