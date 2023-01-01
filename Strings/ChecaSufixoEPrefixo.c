#include <stdio.h>
#include <string.h>

int main(){

    //recebe um int referente a quantidades de prefixos e depois uma sequencia de prefixos
    //depois, mais um int e uma sequencia de sufixos
    //em seguida, várias palavras, até "-1"
    //ex: 2 enter contra enter anti enter 1 enter ote enter palavras... enter -1
    //devolve as palavras sem os sufixos e prefixos
    int i, prefixos, sufixos, contador = 0, tamanhopalavra, tamanhoprefixo, k, j, l, tamanhosufixo, contsufixos, m=0;

    scanf("%d", &prefixos);
    char vetprefixos [prefixos][10];
    if(prefixos != 0){
        for (i = 0; i<prefixos; i++){
            scanf("%s", vetprefixos[i]);
        }
    }

    scanf("%d", &sufixos);
    char vetsufixos[sufixos][10];
    if (sufixos != 0){
        for (i = 0; i <sufixos; i++){
            scanf("%s", vetsufixos[i]);
        }
    }
    
    char palavra[10][100];
    char lixo;
    int operacional;
    for(;;){
        //recebe o input e para o programa na hora certa
        scanf("%s", palavra[0]);
        lixo = palavra[0][0];
        if(lixo == '-'){
            break;
        }
        
        //comparação e modificação
        tamanhopalavra = strlen(palavra[0]);
        
        //checa se há prefixo
        for (i = 0; i < prefixos; i++){
            for(j = 0; j < 10; j++){
                tamanhoprefixo = strlen(vetprefixos[i]);
                if (j == tamanhoprefixo){
                    break;
                }
                if (vetprefixos[i][j] != palavra[0][j]){
                    break;
                }
                
            }
            if(j == tamanhoprefixo){
                break;
            }
        }
        
        //checa se há sufixo    
        for (k = 0; k < sufixos; k++){
            tamanhosufixo = strlen(vetsufixos[k]);
            contsufixos = tamanhopalavra-tamanhosufixo;
            m = 0;
            for(l = contsufixos; l < contsufixos+10; l++){
                
                if (tamanhosufixo >= tamanhopalavra){
                    break;
                }

                else if (vetsufixos[k][m] != palavra[0][l]){
                    break;
                }
                
                m++;
                
                if (l == tamanhopalavra-1){
                    break;
                }
            }
            if (l == tamanhopalavra-1){
                break;
            }
        }
        
        if(l == tamanhopalavra-1 && j == tamanhoprefixo){
            if(tamanhosufixo+tamanhoprefixo >= tamanhopalavra){
                break;
            }
            for(operacional = tamanhoprefixo; operacional < tamanhopalavra - tamanhosufixo; operacional++){
                printf("%c", palavra[0][operacional]);    
            }
            printf("\n");
        }
        
        else if(j == tamanhoprefixo){
                for(operacional = tamanhoprefixo; operacional < tamanhopalavra; operacional++){
                    printf("%c", palavra[0][operacional]);
                }
                printf("\n");
        }
        
        else if(l == tamanhopalavra-1){
            for(operacional = 0; operacional < tamanhopalavra-tamanhosufixo; operacional++){
                printf("%c", palavra[0][operacional]);
            }
            printf("\n");
        }
        
        else{
            printf("%s\n", palavra[0]);
        }

    }


    return 0;
}