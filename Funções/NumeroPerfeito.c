#include <stdio.h>

//recebe número enter número...
//o primeiro número é a quantidade de outros números que virão
//pega o número e checa se é perfeito
//devolve o número e informa se é perfeitou ou não
//entrada ex: 3 enter 6 enter 3 enter 5 enter

int ehPerfeito(int n){
    int i, soma;
    soma = 0;

    for (i = 1; i <= n/2; i++){
        if (n % i == 0){
            soma = soma + i;
        }
    }
    if (soma == n){
        return printf("%d eh perfeito\n", n);
    }
    else{
        return printf("%d nao eh perfeito\n", n);
    }

    }



int main (){
    int n, vezes;
    scanf ("%d", &vezes);
    while(vezes > 0){
        scanf("%d", &n);
        ehPerfeito(n);
        vezes--;
    }

    return 0;
}