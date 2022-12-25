#include <stdio.h>

int main()
{   
    //recebe "5 e": um número e uma letra
    //imprime um X com a letra
    int tamanho, fileira, coluna;
    char letra;

    scanf("%d %c", &tamanho, &letra);
    tamanho--;

    fileira = 0;
    while (fileira < tamanho)
    {
        coluna = 0;
        while (coluna < tamanho)
        {
            if (coluna == fileira || coluna == tamanho - fileira - 1)
            {
                printf("%c", letra);
            }
            else
            {
                printf(" ");
            }
            coluna++;
        }
        printf("\n");
        fileira++;
    }

    return 0;
}