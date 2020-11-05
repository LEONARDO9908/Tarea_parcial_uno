//Libreria
#include<stdio.h>
//Funcion principal
int main(){
    /***
   LECTURA DE DATOS A TRAVES DEL TECLADO
    ***/
    float a;
    float b;
    float c;
    c=a/b;

    printf("INTODUZCA UN NUMERO: ");
    scanf("%f",&a);
    printf("INTODUZCA UN SEGUNDO NUMERO: ");
    scanf("%f",&b);

    if(b==0) {
    printf ("Error,el valor del segundo numero es igual a 0");
    }
    else {
    printf ("El resutado del cociente es: %.3f\n",a/b);
    }
}
