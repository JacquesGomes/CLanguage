#include <stdio.h>
int main (){

    //recebe um número e uma das letras: C (Celsius); F (Farenheit); ou K (Kelvin)
    //devolve a representação da temperatura nas outras duas
    
    float temperatura;
    char escala;
    scanf("%f %c", &temperatura, &escala);
    

    if (escala == 'F'){
        float c = (temperatura - 32) / 1.8;
        float k = (temperatura + 459.67) * 5/9 ;
        printf ("Celsius: %.2f \n", c);
        printf("Farenheit: %.2f \n", temperatura);
        printf("Kelvin: %.2f\n", k);
    }

    if (escala == 'C'){
        float f = temperatura * 1.8 + 32;
        float k = temperatura + 273.15;
        printf ("Celsius: %.2f \n", temperatura);
        printf("Farenheit: %.2f \n", f);
        printf("Kelvin: %.2f", k);
    }

    if (escala == 'K'){
        float f = temperatura - 273.15 * 9/5 + 32;
        float c = temperatura - 273.15;
        printf ("Celsius: %.2f \n", c);
        printf("Farenheit: %.2f \n", f);
        printf("Kelvin: %.2f", temperatura);
    }

    return 0;
} 