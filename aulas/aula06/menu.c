#include <stdio.h>

int main() {
    
    int opcao=0;
    do{
        printf("MENU PRINCIPAL\n");
        printf("1 - consulta saldo\n");
        printf("2 - recarregar\n");
        printf("3 - ver mensagem \n");
        printf("4 - ver ligaçao \n");
        printf("5 - sair\n");
        printf("escolha uma opçao:\n");
        scanf("%i",&opcao);
        while (getchar( )!='\n')

        switch (opcao)
        {
        case 1: printf("seu saldo eh r$10,00\n"); break;
        case 2: printf("escolha entre 10,20,50\n"); break;
        case 3: printf("vc n tem msg\n"); break;
        case 4: printf("ultima ligaçao ;99999-00000\n"); break;
        case 5: printf("obrigado pelo seu contato!\n"); break;
        default :printf(" Opçao invalida! tente novamente\n");
        
        }

    }while (opcao != 5);



return 0;
}


