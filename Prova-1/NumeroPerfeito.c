// checar se é zero; começar da metade do número e -1 a cada loop
// e imprimir quando for == 0, se a variável chegar no zero: print o próprio número; 
#include <stdio.h>
//recebe um int e devolve o maior divisor do número
//caso seja 0, devolve 0
//caso seja primo, devolve o mesmo num
//caso seja negativo, considera-se o módulo

int main (){
    int numeroinicial, i, numeroinicialpositivo = 0;
    scanf("%d", &numeroinicial);
    
    if (numeroinicial == 0){
        return printf("%d", numeroinicial);
    }
    
    if (numeroinicial < 0){
        numeroinicialpositivo = numeroinicial * -1;
    }
    
    if (numeroinicial < 0){
        
        for (i=numeroinicialpositivo/2; i>=1; i--){
        
            if (i == 1){
                return printf("%d", numeroinicialpositivo);
            }
            if (numeroinicialpositivo % i == 0){
                return printf("%d", i);
            }
            
        }
        
    }
    
    else {
                
        for (i=numeroinicial/2; i>=1; i--){
        
            if (i == 1){
                return printf("%d", numeroinicial);
            }
            if (numeroinicial % i == 0){
                return printf("%d", i);
            }
            
        }
    }

    
    return 0;
}