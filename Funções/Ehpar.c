#include <stdio.h>

//refatorar, tá muito complicado
//recebe um número e diz se é par ou não

int ehPar(int numero)
{

int operacao;
operacao = numero % 2;
char t, f;


if (operacao - (int)operacao == operacao){
    return printf("true");
}
else {
    return printf("false");
}
return 0;
}

int main (){

int teste;
scanf("%d", &teste);
ehPar(teste);
return 0;
}