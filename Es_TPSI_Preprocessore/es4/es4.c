#include <stdio.h>
#include "es4.h"    //Includere es4.h

    int main(void){

        float r;

            printf("Inserisci il valore del raggio in cm \n");
            scanf("%f", &r);

            printf("Area del cerchio = %f cm2\n", A(r));
            printf("Perimetro del cerchio = %f cm\n", P(r));
        
    }