#include <stdio.h>
int main () {
    int tabela[3][3];
//  0 1 2 
//0| | | |
//1| | | |
//2| | | |
     tabela[0][0]=1;
//  0 1 2 
//0| | | |
//1| | | |
//2| | | |
     tabela[0][1]=2;
//  0 1 2 
//0| | | |
//1| | | |
//2| | | |
     tabela[0][2]=3;
//  0 1 2 
//0| | | |
//1| | | |
//2| | | |
     tabela[1][0]=5;
//  0 1 2 
//0| | | |
//1| | | |
//2| | | |
    for(int i=0;i<3;i++){
        for(int j =0; j<3;i++){
            printf("entre com a posicao[%i,%i]",i,j);
            scanf("%i", &tabela[i][j]);
        }
    }
printf("assim ficou os valores:\n");
    for(int i=0;i<3;i++){
        for(int j =0; j<3;j++){
            printf("entre com a posicao[%i,%i]",i,j);
            scanf("%i", &tabela[i][j]);
        }
        printf("\n");
    }
    return 0;
}