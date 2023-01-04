//recebe um int com o númerio de chapas
//depois o número da chapa e sua identificação (n vezes)
//depois recebe um int o número de votos
//por fim, os votos
//ex: 3 enter 1 PXDY enter 2 PPAAW enter 3 REP enter 9 enter 1 2 3 5 ...
//devolve o vencedor e o vice
#include <stdio.h>

typedef struct chapas{
    
    int identificador;
    char nome[20];
    int qtd_votos;

} Chapa;

int computar_votos (int qtd_votos, int votos[qtd_votos], int qtd_partidos, Chapa chapas[qtd_partidos], Chapa *mais_votada, Chapa *segunda_votada){
    
    int votos_validos, i, j, contador=0;
    Chapa aux;

    for (i=0; i<qtd_partidos; i++){
        for(j=0; j<qtd_votos; j++){
            if(chapas[i].identificador == votos[j]){
                chapas[i].qtd_votos++;
                contador++;
            }
        }
    }

    for(i=0; i<qtd_partidos; i++){
        for(j=0; j<qtd_partidos-1; j++){
            if(chapas[j].qtd_votos < chapas[j+1].qtd_votos){
                aux = chapas[j];
                chapas[j] = chapas[j+1];
                chapas[j+1] = aux;
            }
        }
    }

    //printf("%d %d", chapas[0].identificador, chapas[1].identificador);

    *mais_votada = chapas[0];
    *segunda_votada = chapas[1];
    return contador;
}

int main (){

    int qtd_partidos, i, qtd_votos;
    scanf("%d", &qtd_partidos);
    Chapa chapas[qtd_partidos];

    for(i=0; i<qtd_partidos; i++){
        scanf ("%d %s", &chapas[i].identificador, chapas[i].nome);
        chapas[i].qtd_votos = 0;
    }

    scanf("%d", &qtd_votos);
    int votos[qtd_votos];

    for (i=0; i<qtd_votos; i++){
        scanf("%d", &votos[i]);
    }

    Chapa mais_votada, segunda_votada;
    int votos_validos;

    votos_validos = computar_votos(qtd_votos, votos, qtd_partidos, chapas, &mais_votada, &segunda_votada);

    float porcentagem1, porcentagem2;

    porcentagem1 = mais_votada.qtd_votos / (votos_validos * 0.01);
    porcentagem2 = segunda_votada.qtd_votos / (votos_validos * 0.01);

    printf("VENCEDOR: %s (%d votos = %.2f%)\n", mais_votada.nome, mais_votada.qtd_votos, porcentagem1);
    printf("VICE: %s (%d votos = %.2f%)", segunda_votada.nome, segunda_votada.qtd_votos, porcentagem2);

    return 0;
}