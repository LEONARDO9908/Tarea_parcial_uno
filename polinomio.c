//Libreria
#include<stdio.h>
#include<math.h>
//Funcion principal

int main(){
    /***
   LECTURA DE DATOS A TRAVES DEL TECLADO
    ***/
    float a;
    float b;
    float c;
    float d;
    float x1;
    float x2;
    d=b*b-4*a*c;
    printf("INTODUZCA EL VALOR DE a DEL POLINOMIO: ");
    scanf("%f",&a);
    printf("INTODUZCA EL VALOR DE b DEL POLINOMIO: ");
    scanf("%f",&b);
    printf("INTODUZCA EL VALOR DE c DEL POLINOMIO: ");
    scanf("%f",&c);

    d=b*b-4*a*c;

    if (d>0.0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("El valor de r1 es: %.3f\n",x1);
        printf("El valor de r2 es: %.3f\n",x2);
    }
    else
    {
        printf("Error");
    }
    }

