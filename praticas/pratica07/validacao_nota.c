// Ler uma nota do usuário até que o valor esteja entre 0 e 10. Exibir a nota válida lida.
#include <stdio.h>

int main(){
    float nota=1;
    printf(" Qual foi sua nota?( de 1 a 10)");
    scanf("%f",&nota);
    
       if( 0<=nota && nota>=10){
            printf("EIITAAA essa foi sua nota-%f\n",nota);
       }else{
            printf("essa nota ai não esta coerente\n");
       }


    
    
    
    return 0;

}