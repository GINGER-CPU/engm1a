#include <stdio.h>

int main(){


    int numero =0;
    printf ( "entre com um numero de 1 a 10 :");
    scanf("%i",&numero);
     
    printf("A tabuada de %i :\n");
    printf("%i x %i = %i\n",1,numero,1 * numero );
    printf("%i x %i = %i\n",2,numero,2 * numero );
    printf("%i x %i = %i\n",3,numero,3 * numero );
    printf("%i x %i = %i\n",4,numero,4 * numero );
    printf("%i x %i = %i\n",5,numero,5 * numero );
    printf("%i x %i = %i\n",6,numero,6 * numero );
    printf("%i x %i = %i\n",7,numero,7 * numero );
    printf("%i x %i = %i\n",8,numero,8 * numero );
    printf("%i x %i = %i\n",9,numero,9 * numero );
    printf("%i x %i = %i\n",10,numero,10 * numero );

    

    for(int i=1;i<=20;i++){
        printf("%i x %i= %i\n ", i , numero , i * numero );
    }

    for(int i=10;i>0;i--){
        printf("%i x %i= %i\n ", i , numero , i * numero );
    }


// aqui  vai dar um loup
//    for(i=1;i>;i++){
//      printf("ao infinito e alem \n");
//  }
    return 0;
}