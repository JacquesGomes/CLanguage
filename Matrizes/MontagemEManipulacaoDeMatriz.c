#include <stdio.h>

//recebe dois ints e um char "9 2 Y"
//Largura, número inicial e cor
//G = Verde; Y = Amarelo; R = Vermelho
//O número inicial + 1 é igual a primeira parte da bandeira
//Cores da bandeira na sequência = verde, amarelho e vermelho
// "6 2 Y" = 3 3 4 4 6 6 * altura
// Y = amarelo, então nesse caso do ex o output é 32 (4*2*4)
//Altura = largura / 3 * 2

int calculoaposta (int largura, int altura, int bandeira[altura][largura], char cor){
    int i, j, divisao;
    int fastint, total=0;
    fastint = largura/3;

    if (cor == 'G'){
        for (i=0; i<altura; i++){
            for (j=0; j<fastint; j++){
                total = total + bandeira[i][j];
            }
        }
        return printf("%d", total);
    }
    
    else if (cor == 'Y'){
        for (i=0; i<altura; i++){
            for(j=fastint; j<fastint*2;j++){
                total = total + bandeira [i][j];
            }
        }
        return printf("%d", total);
    }
    
    else{
        for (i=0; i<altura; i++){
            for(j=fastint*2; j<largura;j++){
                total = total + bandeira [i][j];
            }
        }
        return printf("%d", total);
        
    }

    

}

int main (){
    int largura, inicial, altura = 0, i, j=0, fastint;
    char cor;
    scanf ("%d %d %c", &largura, &inicial, &cor);
    altura = (largura/3) * 2;
    int bandeira [altura][largura];
    fastint = largura/3;
    int k=0, l=0;

    for(i=0; i<altura; i++){
        for (j=0; j<fastint; j++){
            bandeira[i][j] = inicial + 1;
        }
        
        for (k=fastint; k<fastint*2; k++){
            bandeira[i][k] = inicial + 2;
        }
        
        for (l=fastint*2; l<largura;l++){
            bandeira[i][l] = inicial + 3;
        }
    }

    calculoaposta (largura, altura, bandeira, cor);

    return 0;
}