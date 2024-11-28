#include <stdio.h>

#define ABSOLUTE(valore) (valore) >= 0 ? (valore) : -(valore)   //Dichiarazione della macro per il valore assoluto

    int main(void){
        printf("abs(-1) = %d\n"  , ABSOLUTE(-1));
        printf("abs(3-4) = %d\n" , ABSOLUTE(3-4));
        printf("abs(7) = %d\n"   , ABSOLUTE(7));
        printf("abs(-8-3) = %d\n", ABSOLUTE(-8-3));
}