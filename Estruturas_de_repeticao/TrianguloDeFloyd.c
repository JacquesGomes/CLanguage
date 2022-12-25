#include <stdio.h>
int main (){
    // recebe um número maior de 0
    //imprime um triângulo de números com o número de linhas da entrada
    int floyd;
    scanf("%d", &floyd);
    if (floyd <= 0){
        printf("Você entrou com %d, tente de novo na próxima", floyd);
        return;
    }
    int i, e, u = 0;
    for (i=1; i <= floyd; i++){
        for(e=1; e<=i ;e++){
            u++;
            if (u < 10){
                printf(" %d ",u);
            }
            else {
                
            
            printf("%d ",u);
            }
        }
        printf("\n");

    }
    

    }