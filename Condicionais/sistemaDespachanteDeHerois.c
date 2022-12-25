#include <stdio.h>
int main(){

    //recebe três número "1 2 4"
    // o primeiro número é a quantidade de heróis
    // o segundo número é a força dos heróis
    // o terceiro número é o nível dos monstros
    // o programa responde se os heróis vencerão ou se é melhor chamar Saitama
    
    int quantidade, heroi, monstro;
    scanf("%d %d %d", &quantidade, &heroi, &monstro);

    if (monstro == 1){
        
        if (heroi == 1 && quantidade >= 3){
            printf("Heróis vencerão!");
        }

        else if (heroi > 1 && quantidade > 0){
            printf("Heróis vencerão!");

        }
        
        else {

            printf("Melhor chamar Saitama!");

        }
    }
    
    if(monstro == 2){
        if (heroi == 2 && quantidade >=3){
            printf("Heróis vencerão!");
        }
        else if (heroi > 2 && quantidade > 0){
            printf("Heróis vencerão!");
        }
        else{
            printf("Melhor chamar Saitama!");
        }
    }
    
    if (monstro == 3){
        if (heroi == 3 && quantidade >= 3){
            printf("Heróis vencerão!");
        }
        else if(heroi > 3){
            printf("Heróis vencerão!");
        }
        else{
            printf("Melhor chamar Saitama!");
        }
    }

    if (monstro == 4){
        if (heroi == 4 && quantidade >= 3){
            printf("Heróis vencerão!");
        }
        else if(heroi > 4 && quantidade > 0){
            printf("Heróis vencerão!");
        }
        else {
            printf("Melhor chamar Saitama!");
        }

    }
    
    if(monstro == 5){
        if (heroi == 5 && quantidade > 0){
            printf("Heróis vencerão!");
        }
        else {

            printf("Melhor chamar Saitama!");

        }

        
    }

    return 0;
}