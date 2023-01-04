//recebe o número de times
//depois: Nomedotime enter int enter int ...
//nome enter gols_marcados enter gols_sofridos
//devolve a classificação dos times e os dados
#include <stdio.h>

typedef struct Times{
    
    char nome[20];
    int gols_marcados;
    int gols_sofridos;
    
}Time;

void ordenacao(int qtd, Time *concorrente){
    int i, j, k, contador=0, indice=0;

    for(i=0; i<qtd; i++){
        for(j=0; j<qtd; j++){
            if(concorrente[i].gols_marcados >= concorrente[j].gols_marcados){
                contador++;
            }
        }
        if (contador == qtd){
            if (concorrente[i].gols_marcados != -1){
                indice++;
                printf("%d - %s\n", indice, concorrente[i].nome);
                printf("Gols marcados: %d\n", concorrente[i].gols_marcados);
                printf("Gols sofridos: %d\n", concorrente[i].gols_sofridos);
            }
            concorrente[i].gols_marcados = -1;
        }
        contador = 0;
        if (indice == qtd){
            break;
        }
        if (i == qtd-1 && indice < qtd){
            i = i - qtd;
        }

}

}

int main (){
    
    int qtd, i;
    scanf("%d", &qtd);
    Time times[qtd];
    char lixo [1];
    scanf("%c", &lixo[0]);

    for (i=0; i < qtd; i++){
        scanf(" %[^\n] %d %d", times[i].nome, &times[i].gols_marcados, &times[i].gols_sofridos);
    }
    
    ordenacao(qtd, times);

    return 0;
}