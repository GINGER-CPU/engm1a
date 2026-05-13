#include <stdio.h>

int main () {
float icms = 0.17;
float pis =0.0165;
float iss =0.05;
int imposto;
float total ;

printf(" coe digita a grana pra gente descontar o icms pis e o iss:\n");
scanf("%i",&imposto);

icms = icms * imposto;
pis = pis * imposto;
iss =iss * imposto ;
printf("esse é o valor de cada imposto respectivamente:");
printf("%f,",icms);
printf("%f,",pis);
printf("%f",iss);

total += icms+  pis+ iss;
printf( "\nesse é o total a pagar %f\n" ,total);


    return 0;
}