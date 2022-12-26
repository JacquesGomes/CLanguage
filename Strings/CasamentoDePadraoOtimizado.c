#include <stdio.h>

int main (){

    //a entrada são duas linhas
    //na primeira linha há um texto onde o padrão
    //será procurado.
    //Na segunda linha há o padrão
    //exemplo: ACACAGTAC enter ACAG
    //A busca está otimizada para não reiniciar do zero
    //Logo na próxima letra, caso não seja necessário
    //Exemplo: Padrão ACAG - ACAT = Quando encontrar o T
    //Já vai passar para a letra seguinte ao T, pois 
    //Essa letra não pertence ao padrão

    char texto[50];
    char padrao[50];

    fgets(texto, 49, stdin);
    fgets(padrao, 49, stdin);

    int i = 0, j = 0, contador = 0, k = 0, l = 0;
    int total=0, totaltexto=0, caraestranho=0;

    while( padrao[total] != '\0'){
        total++;
    }
    while(texto[totaltexto] != '\0'){
        totaltexto++;
    }
    
    for(;;){
        
        for (;;){
            if (padrao[i] == texto[j]){
            i++;
            j++;
            }
            
            if (i == total){
                break;
            }
            
            
            if (contador >= totaltexto){
                break;
            }
            
            if (j + total >= totaltexto && padrao[i] != texto [j]){
                break;
            }
            
            if (padrao[i] != texto[j]){
                int w = j - i;
                for (k = 0; k < i+1; k++){
                    printf("%c ", texto[w]);
                    w++;
                }
                w = 0;
                printf("não\n");
                break;
                
            }
        }
        
        
        
        
        if (i == total){
            for (i = 0; i<total; i++){
                printf("%c ", padrao[i]);
            }
            printf("sim\n");
            printf("Achei o padrão no índice %d", j-i);
            break;
        }
        
        for (k = 0; k < total; k++){
            if (padrao[k] != texto[j]){
                caraestranho++;
            }
        }
        
        if(caraestranho != total){
            j = j - i;
            j++;
            contador++;
        
        } 
        
        else{
            contador = contador + (j - i);
            j++;
        }
        caraestranho = 0;

        
        if (contador >= totaltexto || j + total >= totaltexto){
            printf("Não achei o padrão");
            break;
        }
        
        i = 0;

    }


    return 0;
}