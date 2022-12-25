#include <stdio.h>
int main(){

    //recebe um número+enter+equipe1(ex: C L S S) +enter+equipe2(ex: C L S S S)...
    //o número inicial representa a quantidade de equipes(linhas)
    //a letra F é a condição de parada
    //São três modalidades (Salto(S), corrida(C), lançamento (L))
    //O programa conta as inscrições em cada modalidade
    // Na saída há a quantidade total em cada tipo (C S L e o total geral)

    int equipes, C, S, L, i;
    char prova;
    C = 0;
    S = 0;
    L = 0;
    scanf("%d", &equipes);
    for (i = equipes; i > 0; i--){
        do {
        scanf ("%c", &prova);
        if (prova == 'C'){
            C++;
        }
        if (prova == 'S'){
            S++;
        }
        if (prova == 'L'){
            L++;
        }
        } while (prova != 'F');
    }
    printf ("%d %d %d %d", C, S, L, C + S + L);
    return 0;

} 
