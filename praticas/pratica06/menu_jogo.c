#include <stdio.h>

int main() {
    int opcao;

    printf("=== MENU DO JOGO ===\n");
    printf("1 - Novo jogo\n");
    printf("2 - Continuar jogo\n");
    printf("3 - Ver pontuacao\n");
    printf("4 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Iniciando novo jogo...\n");
            break;

        case 2:
            printf("Continuando jogo...\n");
            break;

        case 3:
            printf("Exibindo pontuacao...\n");
            break;

        case 4:
            printf("Saindo do jogo...\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}