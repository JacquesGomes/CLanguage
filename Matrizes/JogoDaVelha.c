#include <stdio.h>

//entrada começa com as posições iniciais do jogo
//depois vem uma séria de jogadas
//o programa analisa cada jogada e retorna se vence, é inválida ou se continua o jogo
//ex entrada: X.. enter ... enter X.X enter 5 enter 1 1 X enter
//2 1 X enter 2 2 O enter 2 2 X enter 2 1 O enter
int main (){
    char jogao [3][3], jogaocopia[3][3];
    int i, j, linha, coluna;
    char jogador;

    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            scanf(" %c", &jogao[i][j]);
        }
    }

    //solucao
    int ehigual=0;
    int lixo;
    scanf("%d", &lixo);
    int k, l;
    
    for (k=0; k<lixo; k++){
        
        scanf("%d %d %c", &linha, &coluna, &jogador);
        linha = linha - 1;
        coluna = coluna - 1;
    
        for (i=0; i<3; i++){
            for (j=0; j<3; j++){
                jogaocopia[i][j] = jogao[i][j];
            }
        }
        int apelao = 0;
        
        jogaocopia[linha][coluna] = jogador;
        
        if (jogaocopia[linha][coluna] == 'X' || jogaocopia[linha][coluna] == 'O'){
            if (jogao[linha][coluna] == 'X' || jogao [linha][coluna] == 'O'){
                printf("Jogada inválida!\n");
                apelao++;
                continue;
            }
        }
        
        for (l=0; l<3;l++){
            
            if (jogaocopia[l][0] == 'O' && jogaocopia [l][1] == 'O' && jogaocopia[l][2] == 'O'){
                printf("Boa jogada, vai vencer!\n");
                apelao++;
                continue;
            }
            
            if (jogaocopia[l][0] == 'X' && jogaocopia [l][1] == 'X' && jogaocopia[l][2] == 'X'){
                printf("Boa jogada, vai vencer!\n");
                apelao++;
                continue;
            }
        }
                
        for (l=0; l<3;l++){
            
            if (jogaocopia[0][l] == 'O' && jogaocopia [1][l] == 'O' && jogaocopia[2][l] == 'O'){
                printf("Boa jogada, vai vencer!\n");
                apelao++;
                continue;
            }
            
            if (jogaocopia[0][l] == 'X' && jogaocopia [1][l] == 'X' && jogaocopia[2][l] == 'X'){
                printf("Boa jogada, vai vencer!\n");
                apelao++;
                continue;
            }
        }
        
            
        if (jogaocopia[0][0] == 'O' && jogaocopia [1][1] == 'O' && jogaocopia[2][2] == 'O'){
            printf("Boa jogada, vai vencer!\n");
            apelao++;
            continue;
        }
            
        if (jogaocopia[0][0] == 'X' && jogaocopia [1][1] == 'X' && jogaocopia[2][2] == 'X'){
            printf("Boa jogada, vai vencer!\n");
            apelao++;
            continue;
        }
        
        if (jogaocopia[0][2] == 'O' && jogaocopia [1][1] == 'O' && jogaocopia[2][0] == 'O'){
            printf("Boa jogada, vai vencer!\n");
            apelao++;
            continue;
        }
            
        if (jogaocopia[0][2] == 'X' && jogaocopia [1][1] == 'X' && jogaocopia[2][0] == 'X'){
            printf("Boa jogada, vai vencer!\n");
            apelao++;
            continue;
        }
        
        if (apelao == 0){
            printf("Continua o jogo.\n");
        }
        apelao = 0;
        
        
        
    }
    return 0;
    }
    