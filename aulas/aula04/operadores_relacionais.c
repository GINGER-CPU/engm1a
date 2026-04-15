#include <stdio.h>

int main (){
    int idade;

    printf("entre com sua iade:");
    scanf("%i",&idade);
    while(getchar() !='\n');

    printf("Voce eh uma criança? %i\n",idade<=12);
    printf("voce tem 15 anos?%i\n",idade==15);
    printf("voce eh um idoso?%i\n",idade>59);
    printf("voce e um adulto?",18<=idade<=59);

        return 0;
}

