#include <stdio.h>

//refatorar dividindo entre main e função
//recebe algumas linhas "10 20 20 20 enter 0 0 30 enter 0 0 0 0"
//0 0 0 0 é a condição de parada
// a primeiral linha é o espaço visível o resto são retângulos
//dois pontos: esquerdo,inferior e direito,superior
// a saída afirma se os retângulos estão contidos, contém ou possuem uma interseção
// com a área visível.
//mandar para a função a área visível e algum retângulo (fazer um loop)
int retangulos (){
    float coordenadas1, coordenadas11, coordenadas2, coordenadas22, coordenadas3, coordenadas33, coordenadas4, coordenadas44;
    scanf ("%f %f", &coordenadas1, &coordenadas11);
    scanf ("%f %f", &coordenadas2, &coordenadas22);

    for (;;){
        
        scanf ("%f %f", &coordenadas3, &coordenadas33);
        scanf ("%f %f", &coordenadas4, &coordenadas44);
        
        if (coordenadas3 + coordenadas33 + coordenadas4 + coordenadas44 == 0){
            break;
        }
        
        //(<0.00,0.00>,<30.00,30.00>) contem (<10.00,10.00>,<20.00,20.00>).
        if (coordenadas1 < coordenadas3 && coordenadas11 < coordenadas33) {
            if (coordenadas2 > coordenadas4 && coordenadas22 > coordenadas44){

                printf("(<%.2f,%.2f>,<%.2f,%.2f>) contem (<%.2f,%.2f>,<%.2f,%.2f>).\n", coordenadas1, coordenadas11, coordenadas2, coordenadas22, coordenadas3, coordenadas33, coordenadas4, coordenadas44);
            }
        }

        else if (coordenadas3 + coordenadas33 < coordenadas1 && coordenadas4 + coordenadas44 < coordenadas1){
            printf ("Nao posso afirmar!\n");
        }
        else if (coordenadas1 > coordenadas3 && coordenadas1 == coordenadas44){
            printf("Nao posso afirmar!\n");
        }

        else if (coordenadas1 > coordenadas3 && coordenadas11 > coordenadas33){
            if (coordenadas2 < coordenadas4 && coordenadas22 < coordenadas44){
                printf("(<%.2f,%.2f>,<%.2f,%.2f>) contem (<%.2f,%.2f>,<%.2f,%.2f>).\n", coordenadas3, coordenadas33, coordenadas4, coordenadas44, coordenadas1, coordenadas11, coordenadas2, coordenadas22);
                
            }
        }
        
        else {
           printf("Nao posso afirmar!");

        }
       

    }
}

int main (){
    retangulos();
    return 0;
}