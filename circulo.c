//Libreria
#include<stdio.h>
#include<math.h>
//Funcion principal

int main(){
    /***
   LECTURA DE DATOS A TRAVES DEL TECLADO
    ***/
    float r;
    float pi=3.1416;

    printf("INTODUZCA EL VALOR DEL RADIO: ");
    scanf("%f",&r);

    printf("Los resultadpos del circulo con radio %.2f son:\n",r);
    printf("Area= %.2f\n",pi*r*r);
    printf("Perimetro= %.2f\n",pi*2.0*r);

    }
