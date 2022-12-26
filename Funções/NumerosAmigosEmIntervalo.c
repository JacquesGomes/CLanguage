#include <stdio.h>
//recebe quatro números "200 300 enter 200 300"
//Checa se há um número no primeiro intervalo com pelo menos um numero amigo
//no outro intervalo
//são=cada um for igual à soma dos divisores do outro (sem incluir os próprios números)
int contador;
int ehamigo (int n, int l3, int l4){
    int i = 0, soma = 0, j = 0, soma2 = 0;
    for (i = 1; i <= n/2; i++){
        if (n % i == 0){
            soma = soma + i;
        }
    }
    for (j = 1; j <= soma/2; j++){
        if (soma % j == 0){
            soma2 = soma2 + j;
        }
    }

    if (soma2 == n && soma != n){
        if (l3 <= soma && soma <= l4){
            contador = contador + 1;
            return printf("O %d possui um amigo!\n", n);


        }
    }
}

int main(){
    int l1, l2, l3, l4, dif;
    scanf ("%d %d %d %d", &l1, &l2, &l3, &l4);
    dif = l2 - l1;
    while (dif != 0){
        ehamigo (l1, l3, l4);
        l1++;
        dif--;

    }
    if (contador == 0){
        printf("Os intervalos nao apresentam amigos!");
    }

    return 0;
}