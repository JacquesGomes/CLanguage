#include <stdio.h>
#include <string.h>

int main (){

    //recebe uma palavra, depois um texto
    //devolve as palavras que possuem a palavra inicial
    //ex de entrada: ul enter
    //Paulo estava atrasado enter
    //pulou a cerca para cortar caminho enter
    //Mas perdeu o ultimo onibus enter
    //Sem fazer confusão ou tumulto

    char chave[19];
    char palavra[50];
    char texto[50][50];
    int i, j, tam=0, tamanhochave, tamanhoflutuante=0, k, contador=0;
    char vetormestre[50][50];

    scanf(" %s", chave);
    tamanhochave = strlen(chave);

    while(scanf(" %s", palavra) != EOF){
        strcpy(texto[tam], palavra);
        tam++;
    }
    
    i=0;
    j=0;
    k=0;

    for(;;){
            
        tamanhoflutuante = strlen(texto[i]);
                    
        if (tamanhochave > tamanhoflutuante){
            i++;
            continue;
        }
   
        if(chave[j]==texto[i][k]){
            j++;
            k++;
        }
        
        if(j >= tamanhochave){
            strcpy(vetormestre[contador], texto[i]);
            j=0;
            k=0;
            i++;
            contador++;
        }
            
        if(chave[j] != texto[i][k]){
            if (chave[0] == texto[i][k]){
                j=1;
                k++;
            }
            else{
                j=0;
                k++;
            }
        }
    
        if (k >= tamanhoflutuante){
            i++;
            k=0;
            j=0;
        }
            
        if (i >= tam){
            break;
        }


    }
    
    char copia[50];

    for(i=0; i<contador; i++){
        for(j=0; j<contador-1; j++){
            if ( strcmp( vetormestre[i], vetormestre[j] ) < 0 ){
                strcpy ( copia, vetormestre[i] );
                strcpy( vetormestre[i], vetormestre[j]);
                strcpy( vetormestre[j], copia) ;
        }
        }
    }

    for(i=0; i<contador; i++){
        printf("%s\n", vetormestre[i]);
    }
    
    return 0;
}