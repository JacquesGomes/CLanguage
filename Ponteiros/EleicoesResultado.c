//recebe um int e depois uma sequência de ints
//ex: int enter int int int int ...
//devolve os dois ints mais presentes

#include <stdio.h>

void compute_votes(int n, int votes[n], int *most_voted, int *second_most_voted){

    int i, j=1, contagem[9], intervalo[9], pivo = 0, indice1, indice2;

    for(i=0; i<9; i++){
        intervalo[i] = j;
        j++;
        contagem[i] = 0;
    }

    for (i=0; i<n; i++){
        for(j=0; j<9; j++){
            if(votes[i] == intervalo[j]){
                contagem[j]++;
            }
        }
    }

    for(i=0; i<9; i++){
        for(j=0; j<9;j++){
            if(contagem[i] > contagem[j]){
                pivo++;
            }
        }
        if(pivo >= 8){
            indice1 = i;
            contagem[i] = 0;
            pivo = 0;
            break;
        }
        pivo = 0;
    }

    for(i=0; i<9; i++){
        for(j=0; j<9;j++){
            if(contagem[i] > contagem[j]){
                pivo++;
            }
        }
        if(pivo >= 8){
            indice2 = i;
            break;
        }
        pivo = 0;
    }
    indice1++;
    indice2++;
    *most_voted = indice1;
    *second_most_voted = indice2;

}

int main (){
    int n, i;

    scanf("%d", &n);
    int votes[n];

    for(i=0; i<n; i++){
        scanf("%d", &votes[i]);
    }

    int maisvotado, segundovotado;

    compute_votes(n, votes, &maisvotado, &segundovotado);

    printf("%d %d", maisvotado, segundovotado);

    return 0;
}