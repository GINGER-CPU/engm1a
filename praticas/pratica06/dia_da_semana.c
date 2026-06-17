#include <stdio.h>

int main(){
int x=0;
    printf("fala o dia da semana (1-7):");
    scanf("%i",&x);
    
if(x==1||x==7){
    printf(" %i é um final de semana ",x);
}else{
    printf(" %i é  um dia útil",x);
}
}