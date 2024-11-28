#include <stdio.h>

#define CUBO(valore) (valore)*(valore)*(valore)

    int main(void){
        printf("Cubo(6) = %d\n", CUBO(6));
        printf("Cubo(3 + 4) = %d\n", CUBO(3 + 4));
        printf("Cubo(7) = %d\n", CUBO(7));
        printf("Cubo(9 - 3) = %d\n", CUBO(9 - 3));
    }