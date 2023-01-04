//recebe vários nomes até o nome "acabou", por fim, um int (chave)
//ex: joão enter mario enter francisco enter acabou enter 5
//aloca os nomes dinamicamente e imprime de forma "aleatória", de acordo
//com o int final que é fornecido

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    
    char teste[30];
    char **participantes = NULL;
    int i, j, chavemisteriosa, tamanho = 0, tamanhoteste = 30;
    
    fgets(teste, tamanhoteste, stdin);

    while (strcmp(teste, "acabou\n") != 0){
        //coleta os participantes de forma dinâmica
        participantes = realloc(participantes, sizeof(char*) * tamanho+1);
        participantes[tamanho] = malloc(sizeof(char)*30);
        strcpy (participantes[tamanho], teste);
        tamanho++;
        fgets(teste, tamanhoteste, stdin);
    }
    
    scanf("%d", &chavemisteriosa);
    srand(chavemisteriosa);
    
    int *vetor = NULL;
    int vetorcompanion=0, indice_participante, ajudante=0, contador=0;
    
    do{
        
        indice_participante=rand() % tamanho;
        
        for(i=0; i<vetorcompanion;i++){
            //checa se o índice já foi utilizado
            if(indice_participante == vetor[i]){
                ajudante = 1;
            }
        }
        if (ajudante != 1){
            //imprime caso o índice não tenha sido utilizado
            printf("%s", participantes[indice_participante]);
            contador++;
        }
        
        //aloca dinamicamente o vetor que é responsável por armazenar -
        //os índice já utilizados
        vetor = realloc (vetor, sizeof(int) * vetorcompanion + 1);
        vetor[vetorcompanion] = indice_participante;
        vetorcompanion++;
        
        ajudante = 0;

    } while (contador < tamanho);
    
}