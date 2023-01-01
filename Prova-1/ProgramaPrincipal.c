//calcula a chave com a função código da vinci
//reordena o vetor de acordo com a chave obtida
//para cada valor do vetor reordenado, calcula o número perfeito através da função
//faz a tradução de cada número perfeito para caracteres

//recebe um int e uma sequência de ints, devolve a mensagem decifrada
//se a chave for maior que o número de ints no vetor, reinicia a contagem
#include <stdio.h>

int fcodigodavinci (int local, int arraylocal[local]){
    
    int i, elementofinal = local -1;
    
    int contadorimpar = 0;
    for (i = 0; i < local; i += 2){
        contadorimpar += arraylocal[i];
    }
    
    int contadorpar = 0;
    for (i = 1; i < local; i += 2){
        contadorpar += arraylocal[i];
    }
    
    if (contadorpar >= contadorimpar){
        
        return ("%d", (arraylocal[0] + arraylocal[elementofinal]) / 2);
    }
    
    
    int meio1, meio2;
    meio1 = local /2;
    meio2 = (local / 2) - 1;
    
    if (contadorimpar > contadorpar){
        if (local % 2 == 0){
            return ("%d", (arraylocal[meio1] + arraylocal[meio2]) / 2);
        }
        else{
            return ("%d", arraylocal[local/2]);
        }
    }
    
    
    
}

int purfectos (int elemento){

    int i; 
    
    if (elemento == 0){
        return elemento;
    }
    int elementopositivo;
    if (elemento < 0){
        elementopositivo = elemento * -1;
    }
    
    if (elemento < 0){
        
        for (i=elementopositivo/2; i>=1; i--){
        
            if (i == 1 && elementopositivo != 2){
                return elementopositivo;
            }
            if (elementopositivo % i == 0){
                return i;
            }
            
        }
        
    }
    
    else {
                
        for (i=elemento/2; i>=1; i--){
        
            if (i == 1){
                return elemento;
            }
            if (elemento % i == 0){
                return i;
            }
            
        }
    }
    

}

void traducao (int local, int i, int arrayordenado[local]){
    
    if (arrayordenado[i] >= 26){
        while (arrayordenado[i] >= 26){
            arrayordenado[i] = arrayordenado[i] - 26;
        }
    }
    
    switch (arrayordenado[i]){
        case 0 :
            printf("A");
        break;
        
        case 1:
            printf("B");
        break;
        
        case 2:
            printf("C");
        break;
        
        case 3:
            printf("D");
        break;
        
        case 4:
            printf("E");
        break;
        
        case 5:
            printf("F");
        break;
        
        case 6:
            printf("G");
        break;
        
        case 7:
            printf("H");
        break;
        
        case 8:
            printf("I");
        break;
        
        case 9:
            printf("J");
        break;
        
        case 10:
            printf("K");
        break;
        
        case 11:
            printf("L");
        break;
        
        case 12:
            printf("M");
        break;
        
        case 13:
            printf("N");
        break;
        
        case 14:
            printf("O");
        break;
        
        case 15:
            printf("P");
        break;
        
        case 16:
            printf("Q");
        break;
        
        case 17:
            printf("R");
        break;
        
        case 18:
            printf("S");
        break;
        
        case 19:
            printf("T");
        break;
        
        case 20:
            printf("U");
        break;
        
        case 21:
            printf("V");
        break;
        
        case 22:
            printf("W");
        break;
        
        case 23:
            printf("X");
        break;
        
        case 24:
            printf("Y");
        break;
        
        case 25:
            printf("Z");
        break;
        
    }
}

int main (){
    int i, local;
    scanf("%d", &local);
    int arraylocal[local];
    
    for (i=0; i<local; i++){
        scanf("%d", &arraylocal[i]);
    }
    
    int davincicode = 0;
    davincicode = fcodigodavinci(local, arraylocal);
    
    if (davincicode < 0) {
        davincicode = davincicode * -1;
    }
    
    if (davincicode >= local){
        while (davincicode >= local){
            davincicode = davincicode - local;
        }
        
    }
    
    int arrayperfeito[local];
    
    if (davincicode == 0){
        // continuar normal: achar os purfectos depois jogar eles através de um
        // loop na tradução
        for (i = 0; i < local; i++){
            arrayperfeito [i] = purfectos(arraylocal[i]);
        }
    
        for (i = 0; i < local; i++){
            traducao(local, i, arrayperfeito);
        }
    
    }
    
    else {
        int arrayordenado[local];
        
        for (i = 0; i < local; i++){
           arrayordenado[i] = arraylocal[davincicode];
           davincicode++;
           if (davincicode >= local){
               davincicode = davincicode - local;
           }
        }
        
        for (i = 0; i < local; i++){
            arrayperfeito[i] = purfectos(arrayordenado[i]);
        }
        
        for (i = 0; i < local; i++){
            traducao (local, i, arrayperfeito);
        }
    }
    

    
}