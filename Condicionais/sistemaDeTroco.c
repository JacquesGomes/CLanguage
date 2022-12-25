#include <stdio.h>
int main(){

    //recebe dois números: "1 23"
    //o primeiro número é referente ao tipo do hamburguer 
    //o segundo é o valor pago pelo cliente
    //devolve "Deu certim!" se não houver troco
    // devolve "Troco = X " se houver pagamento em excesso
    // devolve "Falta X" se o dinheiro for insuficiente
    
    int burguer, cash;
    scanf("%d %d", &burguer, &cash);
    if (burguer == 1){
        if (cash == 12){
            printf("Deu certim!");
        }
        else if (cash > 12){
            int troco = cash - 12;
            printf("Troco = %d reais", troco);
        }
        else {
            int falta = 12 - cash;
            printf("Saldo insuficiente! Falta %d reais", falta);
        }
    }

    if (burguer == 2){
        if (cash == 23){
            printf("Deu certim!");
        }
        else if (cash > 23){
            int troco = cash - 23;
            printf("Troco = %d reais", troco);
        }
        else {
            int falta = 23 - cash;
            printf("Saldo insuficiente! Falta %d reais", falta);
        }
    }

    if (burguer == 3){
        if (cash == 31){
            printf("Deu certim!");
        }
        else if (cash > 31){
            int troco = cash - 31;
            printf("Troco = %d reais", troco);
        }
        else {
            int falta = 31 - cash;
            printf("Saldo insuficiente! Falta %d reais", falta);
        }
    }

    if (burguer == 4){
        if (cash == 28){
            printf("Deu certim!");
        }
        else if (cash > 28){
            int troco = cash - 28;
            printf("Troco = %d reais", troco);
        }
        else {
            int falta = 28 - cash;
            printf("Saldo insuficiente! Falta %d reais", falta);
        }
    }

    if (burguer == 5){
        if (cash == 15){
            printf("Deu certim!");
        }
        else if (cash > 15){
            int troco = cash - 15;
            printf("Troco = %d reais", troco);
        }
        else {
            int falta = 15 - cash;
            printf("Saldo insuficiente! Falta %d reais", falta);
        }
    }
}