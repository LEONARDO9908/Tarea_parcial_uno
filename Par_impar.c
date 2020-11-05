//Libreria
#include<stdio.h>
//Funcion principal
int main(){
    /***
   LECTURA DE DATOS A TRAVES DEL TECLADO
    ***/
    int a;

    printf("INTODUZCA UN VALOR: ");
    scanf("%d",&a);

    if (a%2==0)
    {
    printf ("El valor de %d es par\n",a);
    }
    else
    {
    printf ("El valor de %d es impar\n",a);
    }

}
