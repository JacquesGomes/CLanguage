#include <stdio.h>

//Recebe um int com a quantidade de times
//Depois uma lista com "nome do time; int int int int int"
//nome; vitórias empates derrotas gols_feitos gols_sofridos
//devolve a classificação + os times na zona da libertadores + times rebaixados

typedef struct Times{
    char nome[200];
    int vitorias;
    int empates;
    int derrotas;
    int gols_feitos;
    int gols_sofridos;
    int pontos;
    int saldo_gols;
} Time;

Time leitura (int qtd, Time times[qtd]){
    
    int i;
    char lixo [2];
    for(i=0; i<qtd; i++){
        scanf("%[^;]", times[i].nome);
        scanf("%c", &lixo);
        scanf(" %d %d %d %d %d", &times[i].vitorias,  &times[i].empates, &times[i].derrotas, &times[i].gols_feitos, &times[i].gols_sofridos);
        times[i].pontos = times[i].vitorias * 3 + times[i].empates;
        times[i].saldo_gols = times[i].gols_feitos - times[i].gols_sofridos;
    }
    return times[qtd];
    
}

void impressao (int qtd, Time times[qtd]){
    int i, j;
    Time aux;

    for(i=0; i<qtd; i++){
        for(j=0; j<qtd-1; j++){
            if(times[j].pontos < times[j+1].pontos){
                aux = times[j];
                times[j] = times[j+1];
                times[j+1] = aux;
            }
            else if (times[j].pontos == times[j+1].pontos){
                if(times[j].vitorias < times[j+1].vitorias){
                    aux = times[j];
                    times[j] = times[j+1];
                    times[j+1] = aux;
                }
                else if (times[j].vitorias == times[j+1].vitorias){
                    if(times[j].saldo_gols < times[j+1].saldo_gols){
                        aux = times[j];
                        times[j] = times[j+1];
                        times[j+1] = aux;
                    }
                }
            }
        }
    }
    printf("Tabela do campeonato:\n");
    printf("Nome| Pontos| Jogos| Vitorias| Empates| Derrotas| Gols Pro| Gols Contra| Saldo de Gols");
    
    for(i=0; i<qtd; i++){
        printf("%s| %d| %d| %d| %d| %d| %d| %d| %d", times[i].nome, times[i].pontos, times[i].vitorias+times[i].derrotas+times[i].empates, times[i].vitorias, times[i].empates, times[i].derrotas, times[i].gols_feitos, times[i].gols_sofridos, times[i].saldo_gols);
            }
       
    printf("\n\nTimes na zona da libertadores:");
    
    for(i=0; i<6; i++){
        printf("%s", times[i].nome);
    }
    
    printf("\n\nTimes rebaixados:");
    
    for(i=qtd; i>qtd-5; i--){
        printf("%s", times[i].nome);
    }
}

int main (){

    int qtd;
    scanf("%d", &qtd);
    Time times[qtd];
    times[qtd] = leitura(qtd, times);
    impressao(qtd, times);

    return 0;
}