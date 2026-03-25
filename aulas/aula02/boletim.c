#include <stdio.h>
/*
printf("=========================\n")
printf(" BOLETIM DE NOTAS\n")
printf("=========================\n")
printf("diciplina A1     A2    A3    MF\n")
printf("APC 1     5.2   2.3    6.0    5.6 \n")
printf("MAT DISC  6.0   5.0    -      5.5  \n")
printf("CAUCULO   4.0   4.0  4.0     4.0 \n")
*/

int main(){
int codigo_diciplina;
float nota_a1=5.2f;
float nota_a2= 2.3f;
float nota_a3=6.0f;
float nota_final=5.6f;

codigo_diciplina=123;
nota_a1=5.2f;
nota_a2= 2.3f;
nota_a3=6.0f;
nota_final=5.6f;





printf("=========================\n");
printf(" BOLETIM DE NOTAS\n");
printf("=========================\n");

printf("%05i  %.1f %.1f %.1f %.1f   \n", codigo_diciplina,nota_a1,nota_a2 ,nota_a3 ,nota_final);
codigo_diciplina=124;
nota_a1=5.2f;
nota_a2=6.0f;
nota_a3=0.0f;
nota_final=5.5f;

printf("%05i  %5.1f %5.1f %5.1f %5.1f   \n",codigo_diciplina,nota_a1,nota_a2 ,nota_a3 ,nota_final);
codigo_diciplina=125;
nota_a1=10.0f;
nota_a2= 4.0f;
nota_a3= 4.0f;
nota_final=4.0f;

printf("%05i %5.1f %5.1f %5.1f %5.1f  \n",codigo_diciplina,nota_a1,nota_a2 ,nota_a3 ,nota_final);
    return 0;
}


