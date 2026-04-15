#include <stdio.h>

int main (){
    int idade;

    printf("entre com sua iade:");
    scanf("%i",&idade);
    while(getchar() !='\n');

    printf(" voce eh uma criança?%i",idade>=0 && idade<=12);
    printf(" voce eh um adolecente?%i",idade> 12 && idade<16);
    printf(" voce eh uma jovem?%i",idade>=16 && idade<=20);


    printf("voce tem prioridade para vacinar ?%i\n",idade<=6 || idade >=60);
    printf("vocenaum pode votar? %i\n",!(iade>=16));
   
    return 0;
}
