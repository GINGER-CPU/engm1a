#include <stdio.h>
 
int main() {

int nota =0;
printf("digite a sua nota:\n ");
scanf("%i",&nota);



    switch ( nota){
        case 1: printf("ganhou uma estrela *\n");break;
        case 2: printf("ganhou uma estrela **\n");break;
        case 3: printf("ganhou uma estrela ***\n");break;
        case 4: printf("ganhou uma estrela ****\n");break;
        case 5: printf("ganhou uma estrela *****\n");break;
    }

    return 0;
}











