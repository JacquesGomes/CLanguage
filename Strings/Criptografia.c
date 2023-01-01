//recebe uma chave de 0000 até 9999 e uma mensagem de até 200 chars
//Encripta a mensagem de acordo com a chave
//Só permite certos caracteres
#include <stdio.h>
#include <string.h>

int main(){
    
    int chave, i, tamanhomensagem, contador=0, j, contadorclone, arraydachave[4], operacional = 0;
    char mensagem[200],lixo[5];
    
    scanf("%d", &chave);
    
    if(chave > 9999 || chave < 0){
        return printf("Chave invalida!");
    }
    
    arraydachave[0] = (chave%10000) / 1000;
    arraydachave[1] = (chave%1000) / 100;
    arraydachave[2] = (chave%100) / 10;
    arraydachave[3] = chave % 10;
    
    const char S[]=
    {'0','1','2','3','4','5','6','7','8','9',
     'A','B','C','D','E','F','G','H','I','J',
     'K','L','M','N','O','P','Q','R','S','T',
     'U','V','W','X','Y','Z','.',',','?',' '};
     
    scanf("%c ", &lixo[0]);
    
    fgets(mensagem, 200, stdin);
    tamanhomensagem = strlen(mensagem);
    tamanhomensagem --;
    
    for(i = 0; i < tamanhomensagem; i++){
        for(j = 0; j < 40; j++){
            if(mensagem[i] == S[j]){
                contador++;
            }
        }
        contadorclone = contador;
        if(contadorclone == 0){
            break;
        }
        contador=0;
    }
    if(contadorclone == 0){
        return printf("Caractere invalido na entrada!");
    }
    
    int contadordachave=0;
    
    for (i=0; i < tamanhomensagem; i++){
        if(contadordachave > 3){
            contadordachave = 0;
        }
        for(j=0; j <40; j++){
            if(mensagem[i] == S[j]){
                if(arraydachave[contadordachave] == 0){
                    printf("%c", mensagem[i]);
                    contadordachave++;
                }
                else{
                    operacional = j + arraydachave[contadordachave];
                    if(operacional > 39){
                        operacional = operacional - 40;
                    }
                    printf("%c", S[operacional]);
                    contadordachave++;
                }


            }
        }
    }
    
    
    return 0;
}