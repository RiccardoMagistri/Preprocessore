#include <stdio.h>

//Dichiarazione macro
#define EURO_LIRA(euro) (euro)*1936.36
#define LIRA_EURO(lira) (lira)/1936.36


    int main(void){

        int scelta;     //Dichiarazione scelta conversione
        float valore;   //Dichiarazione valore da convertire

            //Informazioni per come scegliere il tipo di conversione
            printf("Digitare '1' per EURO -> LIRA \n");
            printf("Digitare '2' per LIRA ->EURO \n");
            scanf("%d", &scelta);

            //Scelta tipo di conversione
                switch (scelta)
                {
                case 1:
                    printf("Inserisci il valore da convertire da EURO a LIRE \n");
                    scanf("%f", &valore);
                    printf("%f euro -> %f lire", valore, EURO_LIRA(valore)); //Conversione con l'uso della macro
                    break;
                
                case 2:
                    printf("Inserisci il valore da convertire da LIRE a EURO \n");
                    scanf("%f", &valore);
                    printf("%f lire -> %f euro", valore, LIRA_EURO(valore)); //Conversione con l'uso della macro
                    break;
        
                default:
                    printf("Nessuna operazione riconosciuta \n");
                    break;
                }
    }