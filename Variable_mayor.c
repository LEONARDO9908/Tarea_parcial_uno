//Libreria
#include<stdio.h>

//Funcion principal
int main(){
    /***
   LECTURA DE DATOS A TRAVES DEL TECLADO
    ***/
    int a;
    int b;

    printf("INTODUZCA UN VALOR: ");
    scanf("%d",&a);
    printf("INTODUZCA UN SEGUNDO VALOR: ");
    scanf("%d",&b);

    if(a>b) {
    printf ("El primer valor es mayor que el segundo");
    }
    else {
    printf ("El segundo valor es mayor que el primero");
    }
}
