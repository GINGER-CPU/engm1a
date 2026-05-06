#include <stdio.h>

int main (){

    int idade=0;

    printf("entre com a sua idade:");
    scanf ("%i",&idade );
   


    if( idade>=16){
        printf("com %i anos voce pode votar!!\n",idade);
    }else{
        printf("com %i anos voce nao pode votar...\n",idade);
    }

    if(idade<16){
        printf("com %i anos voce nao pode votar...\n",idade);
    }

    if(17<idade && idade<70){
            printf( "mas tambem deve votar!!\n");
       }




return 0;
}

