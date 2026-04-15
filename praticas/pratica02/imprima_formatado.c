
 #include <stdio.h>


int main (){
int calca =001  ;
int camisa =002 ; 
int meia =003 ;

float cl = 39.99;
float c =89.90;
float m =19.99;

printf("=================\nNOTA LEGAL\n=================\nprodutos         Qtd  Valor  Unit\n");
printf("%-17s %2.2i         %3.2f\n","calca", calca, cl);
printf("%-17s %2.2i         %.2f\n","camisa", camisa,c);
printf("%-17s %2.2i         %.2f\n","meia social",meia,m);
float total;
total += c + cl + m ;
printf("=================\n Total %.2f \n",total);


    return 0;
}

