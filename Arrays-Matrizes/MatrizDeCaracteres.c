#include <stdio.h>
int main(){

    //recebe dois ints, ex: "5 5"
    //depois recebe uma matriz de caracteres (no caso do exemplo, 5 linhas e 5 char por linha)
    // '~' = água; '*' = vegetação; '.' solo sem recursos; '^' deserto; 'X' espécies hostis
    //devolve a classificação do planeta (hostil = pelo menos uma espécie hostil; aquático = 85% água; desértico = 60% deserto;
    //selvagem = 65% vegetação; habitável = pelos 50% água, pelo menos 20% vegetação, e 0 espécies hostis; inóspito = nenhuma das outras;

    int linha, coluna, i, j;
    scanf("%d %d", &linha, &coluna);
    char todoplaneta [linha][coluna];
    for(i=0; i<linha; i++){
        for (j=0; j<coluna; j++){
            scanf(" %c", &todoplaneta[i][j]);
        }
    }
    int totalplaneta = linha * coluna;
    float sessentaecinco = totalplaneta * 0.65;
    float sessenta = totalplaneta * 0.60;
    float oitentaecinco = totalplaneta * 0.85;
    float cinquenta = totalplaneta * 0.5;
    float vinte = totalplaneta * 0.2;


    float selvagem = 0, deserto = 0, agua = 0, habitavel = 0, habitavel2 = 0;
    //planeta hostil, é você?
    for (i = 0; i<linha; i++){
        for (j=0; j < coluna; j++){
            if (todoplaneta[i][j] == 'X'){
                return printf("Planeta Hostil");
            }
        }
    }

    //estamos lidando com um planeta selvagem?
    for (i = 0; i<linha; i++){
        for (j=0; j < coluna; j++){
            if (todoplaneta[i][j] == '*'){
                selvagem++;
            }
        }
    }
    
    if (selvagem >= sessentaecinco){
        return printf("Planeta Selvagem");
    }

    //estamos lidando com um planeta desértico?
    for (i = 0; i<linha; i++){
        for (j=0; j < coluna; j++){
            if (todoplaneta[i][j] == '^'){
                deserto++;
            }
        }
    }
    
    if (deserto >= sessenta){
        return printf("Planeta Desértico");
    }
    
    //estamos lidando com um planeta aquático?
    for (i = 0; i<linha; i++){
        for (j=0; j < coluna; j++){
            if (todoplaneta[i][j] == '~'){
                agua++;
            }
        }
    }
    
    if (agua >= oitentaecinco){
        return printf("Planeta Aquático");
    }

    //estamos lidando com um planeta habitável?
    for (i = 0; i<linha; i++){
        for (j=0; j < coluna; j++){
            if (todoplaneta[i][j] == '~'){
                agua++;
            }
        }
    }
    
    for (i = 0; i<linha; i++){
        for (j=0; j < coluna; j++){
            if (todoplaneta[i][j] == '~'){
                habitavel++;
            }
        }
    }
    
    for (i = 0; i<linha; i++){
        for (j=0; j < coluna; j++){
            if (todoplaneta[i][j] == '*'){
                habitavel2++;
            }
        }
    }
    
    if (habitavel >= cinquenta && habitavel2 >= vinte){
        return printf("Planeta Classe M");
    }
    
    printf("Planeta Inóspito");
    return 0;
}
