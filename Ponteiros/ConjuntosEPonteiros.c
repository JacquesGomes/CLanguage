#include <stdio.h>

//recebe duas linhas de int, onde o primeiro número da linha é a quantidade
//ex: 6 1 2 3 4 5 6 enter 5 2 3 4 5 6
//Conjunto de seis elementos e outro de cinco elementos
//Devolve a união e interseção dos conjuntos, usando ponteiros e struct

typedef struct Conjuntos{

    int quantidade;
    int elementos[20];
    int contador;

} Conjunto;

Conjunto *uniao (Conjunto *A, Conjunto *B){

    Conjunto uniao;
    int i, j, contador=0;

    if(A->quantidade >= B->quantidade){
        for (i=0; i<A->quantidade; i++){
            for (j=0; j<B->quantidade; j++){
                if (A->elementos[i] == B->elementos[j]){
                    B->elementos[j] = -1;
                }
            }
        }
    }

    else{
        for (i=0; i<B->quantidade; i++){
            for (j=0; j<A->quantidade; j++){
                if (B->elementos[i] == A->elementos[j]){
                    A->elementos[j] = -1;
                }
            }
        }
    }

    if(A->quantidade >= B->quantidade){
        for(i=0; i<A->quantidade;i++){
            uniao.elementos[i] = A->elementos[i];
            contador++;
        }
        for(j=0; j<B->quantidade;j++){
            if(B->elementos[j] != -1){
               uniao.elementos[contador] = B->elementos[j];
               contador++; 
            }
        }
    }

    else {
        for(i=0; i<B->quantidade;i++){
            uniao.elementos[i] = B->elementos[i];
            contador++;
        }
        for(j=0; j<A->quantidade;j++){
            if(A->elementos[j] != -1){
               uniao.elementos[contador] = A->elementos[j];
               contador++; 
            }
        }

    }

    Conjunto *uniaoz = &uniao;
    uniaoz->contador = contador;
    return uniaoz;
}

Conjunto *intersecao (Conjunto *A, Conjunto *B){

    int i, j, contador=0;
    Conjunto intersecao;

    for (i=0; i<B->quantidade; i++){
        for (j=0; j<A->quantidade; j++){
            if (A->elementos[j] == B->elementos[i]){
                intersecao.elementos[contador] = B->elementos[i];
                contador++;
                break;
            }
        }
    }

    Conjunto *intersecaoz = &intersecao;
    intersecaoz->contador = contador;
    return intersecaoz;
}

int main (){

    Conjunto A, B;
    int i, contador=0, contador2=0;
    Conjunto *Az = &A, *Bz = &B, *uniaolocal, *intersecaolocal;

    scanf("%d", &A.quantidade);
    for (i=0; i < A.quantidade; i++){
        scanf("%d", &A.elementos[i]);
    }
    scanf("%d", &B.quantidade);
    for(i=0; i < B.quantidade; i++){
        scanf("%d", &B.elementos[i]);
    }

    Conjunto Azz = A, Bzz = B;
    Conjunto *Bzzz = &Bzz, *Azzz = &Azz;

    uniaolocal = uniao(Az, Bz);
    if (A.quantidade == 0 && B.quantidade == 0){
        printf("A união B == {vazio}\n");
        printf("A interseção B == {vazio}");
        contador++;
    }
    if(contador == 0){
        printf("A união B == {");
        for(i=0; i<uniaolocal->contador-1; i++){
            printf("%d ", uniaolocal->elementos[i]);    
        }
        printf("%d}\n", uniaolocal->elementos[uniaolocal->contador-1]);
    }

    intersecaolocal = intersecao(Azzz, Bzzz);
    if (A.quantidade == 0 || B.quantidade==0){
        if(contador == 0){
            contador2++;
            printf("A interseção B == {vazio}");
        }
    }
    if(contador == 0 && contador2 ==0){
        printf("A interseção B == {");
        for (i=0; i<intersecaolocal->contador-1;i++){
            printf("%d ", intersecaolocal->elementos[i]);
        }
        printf("%d}", intersecaolocal->elementos[intersecaolocal->contador-1]);
    }

    return 0;
}

