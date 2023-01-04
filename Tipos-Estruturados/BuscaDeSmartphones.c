//recebe uma caracteres que pode ser "s" ou "n"
//quando for "s", lê as características de um telefone
//quando for "n", lê as configurações mínimas para ser considerado smartphone
//ex: s enter Galaxy A51 enter 4 enter 2 enter 48 enter 4000
//nome enter memoria enter processador enter camera enter bateria
//devolve a descrição dos smartphones encontrados e o total de smartphones encontrados

#include <stdio.h>

typedef struct Smart{
    char modelo [40];
    int memoria;
    float processador;
    float camera;
    float bateria;
}Smartphone;

int cadastraSmartphone (int qnt_cadastrada, Smartphone phones[qnt_cadastrada]){
    //acrescenta um smartphone ao cadastro, preenche a estrutura e retorna quantidade de smartphones na lista
    int j;
    int i = qnt_cadastrada;
    scanf(" %[^\n]", phones[i].modelo);
    scanf(" %d %f %f %f", &phones[i].memoria, &phones[i].processador, &phones[i].camera, &phones[i].bateria);
    j = qnt_cadastrada + 1;
    return j;
}

int pesquisaSmartphones (int qnt_cadastrada, Smartphone phones[qnt_cadastrada], Smartphone reqMin){

    //imprimir os smartphones, retornar a quantidade de smartphones
    //fazer um loop com a qnt_cadas para buscar na função cadastra smart um smart que seja maior ou igual aos reqmin
    //imprimir quando encontrar e somar no int quantidade smarts
    
    int quantidadesmarts=0, i;
    
    for(i = 0; i < qnt_cadastrada; i++){
        if(reqMin.memoria <= phones[i].memoria && reqMin.processador <= phones[i].processador){
            if(reqMin.camera <= phones[i].camera && reqMin.bateria <= phones[i].bateria){
                printf("Modelo: %s\n", phones[i].modelo);
                printf("Memoria: %dGB\n", phones[i].memoria);
                printf("Processador: %.2fGhz\n", phones[i].processador);
                printf("Camera: %.2fMPixels\n", phones[i].camera);
                printf("Bateria: %.2fmA\n", phones[i].bateria);
                printf("\n");
                quantidadesmarts++;
            }
        }
    }
    
    return quantidadesmarts;
    
    }

int main (){
    
    Smartphone reqMin;
    int quantidadegeral=0, quantidadesmarts, i=10;
    Smartphone smarts[i];
    char teste[2];
    scanf(" %c", &teste[0]);
    
    //função cadastro
    while (teste[0] == 's'){
        i++;
        quantidadegeral = cadastraSmartphone(quantidadegeral, smarts);
        scanf(" %c", &teste[0]);
    }

    //função reqMin
    scanf(" %d %f %f %f", &reqMin.memoria, &reqMin.processador, &reqMin.camera, &reqMin.bateria);
    quantidadesmarts = pesquisaSmartphones(quantidadegeral, smarts, reqMin);
    printf("%d smartphones encontrados.", quantidadesmarts);

    return 0;
}