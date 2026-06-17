#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    struct Produto{
        int id;
        char nome[50];
        float preco;
        int quantidade;
    };

    struct Produto estoque[10];
    int total=0;
    int op;
    int i=0;
    int x=0;
    int achou=0;
    int id_busca;
    int id_temp;
    float preco_temp;
    int qtd_temp;
    char nome_temp[50];
    char buf[50];

    printf("Eu estou funcionando\nDigite 0 para sair em qualquer momento\nObrigado e aproveite\n");

    do{
        printf("\n===== MENU =====\n");
        printf("1 - Cadastrar\n");
        printf("2 - Listar\n");
        printf("3 - Buscar\n");
        printf("4 - Atualizar\n");
        printf("5 - Remover\n");
        printf("0 - Sair\n");
        printf("Opcao: ");

        if(fgets(buf,sizeof(buf),stdin)==NULL){ break; }
        if(sscanf(buf,"%d",&op)!=1){
            printf("Opcao invalida!\n");
            op=-1;
            continue;
        }

        switch(op){
            case 1:
                if(total==10){
                    printf("Estoque cheio!\n");
                    break;
                }

                printf("ID: ");
                if(fgets(buf,sizeof(buf),stdin)==NULL){ break; }
                if(sscanf(buf,"%d",&id_temp)!=1){
                    printf("ID invalido!\n");
                    break;
                }
                if(id_temp==0){
                    printf("Saindo...\n");
                    return 0;
                }
                if(id_temp<0){
                    printf("ID invalido!\n");
                    break;
                }

                achou=0;
                for(i=0;i<total;i++){
                    if(estoque[i].id==id_temp){
                        achou=1;

                    }
                }
                if(achou==1){
                    printf("ID ja cadastrado!\n");
                    break;
                }

                printf("Nome: ");
                if(fgets(nome_temp,sizeof(nome_temp),stdin)==NULL){ break; }
                nome_temp[strcspn(nome_temp,"\n")]='\0';
                if(strlen(nome_temp)==0){
                    printf("Nome invalido!\n");
                    break;
                }

                printf("Preco: ");
                if(fgets(buf,sizeof(buf),stdin)==NULL){ break; }
                if(sscanf(buf,"%f",&preco_temp)!=1){
                    printf("Preco invalido!\n");
                    break;
                }
                if(preco_temp<0){
                    printf("Preco invalido!\n");
                    break;
                }

                printf("Quantidade: ");
                if(fgets(buf,sizeof(buf),stdin)==NULL){ break; }
                if(sscanf(buf,"%d",&qtd_temp)!=1){
                    printf("Quantidade invalida!\n");
                    break;
                }
                if(qtd_temp<0){
                    printf("Quantidade invalida!\n");
                    break;
                }

                estoque[total].id = id_temp;
                strcpy(estoque[total].nome,nome_temp);
                estoque[total].preco = preco_temp;
                estoque[total].quantidade = qtd_temp;
                total++;
                printf("Cadastrado com sucesso!\n");
            break;

            case 2:
                if(total==0){
                    printf("Nenhum produto cadastrado.\n");
                    break;
                }
                printf("\n--- Produtos ---\n");
                for(i=0;i<total;i++){
                    printf("ID: %d | Nome: %s | Preco: %.2f | Qtd: %d\n",
                    estoque[i].id,estoque[i].nome,estoque[i].preco,estoque[i].quantidade);

                }
            break;

            case 3:
                if(total==0){
                    printf("Nenhum produto cadastrado.\n");
                    break;
                }
                printf("ID para buscar: ");
                if(fgets(buf,sizeof(buf),stdin)==NULL){ break; }
                if(sscanf(buf,"%d",&id_busca)!=1){
                    printf("ID invalido!\n");
                    break;
                }

                achou=0;
                for(i=0;i<total;i++){
                    if(estoque[i].id==id_busca){
                        printf("ID: %d | Nome: %s | Preco: %.2f | Qtd: %d\n",
                        estoque[i].id,estoque[i].nome,estoque[i].preco,estoque[i].quantidade);
                        achou=1;

                    }
                }
                if(achou==0){
                    printf("Produto nao encontrado.\n");
                }
            break;

            case 4:
                if(total==0){
                    printf("Nenhum produto cadastrado.\n");
                    break;
                }
                printf("ID para atualizar: ");
                if(fgets(buf,sizeof(buf),stdin)==NULL){ break; }
                if(sscanf(buf,"%d",&id_busca)!=1){
                    printf("ID invalido!\n");
                    break;
                }

                achou=0;
                for(i=0;i<total;i++){
                    if(estoque[i].id==id_busca){
                        achou=1;

                        printf("Novo preco: ");
                        if(fgets(buf,sizeof(buf),stdin)==NULL){ break; }
                        if(sscanf(buf,"%f",&preco_temp)!=1){
                            printf("Preco invalido!\n");
                            break;
                        }
                        if(preco_temp<0){
                            printf("Preco invalido!\n");
                            break;
                        }

                        printf("Nova quantidade: ");
                        if(fgets(buf,sizeof(buf),stdin)==NULL){ break; }
                        if(sscanf(buf,"%d",&qtd_temp)!=1){
                            printf("Quantidade invalida!\n");
                            break;
                        }
                        if(qtd_temp<0){
                            printf("Quantidade invalida!\n");
                            break;
                        }

                        estoque[i].preco = preco_temp;
                        estoque[i].quantidade = qtd_temp;
                        printf("Atualizado com sucesso!\n");

                    }
                }
                if(achou==0){
                    printf("Produto nao encontrado.\n");
                }
            break;

            case 5:
                if(total==0){
                    printf("Nenhum produto cadastrado.\n");
                    break;
                }
                printf("ID para remover: ");
                if(fgets(buf,sizeof(buf),stdin)==NULL){ break; }
                if(sscanf(buf,"%d",&id_busca)!=1){
                    printf("ID invalido!\n");
                    break;
                }

                achou=0;
                x=0;
                for(i=0;i<total;i++){
                    if(estoque[i].id==id_busca){
                        achou=1;
                        x=i;

                    }
                }
                if(achou==0){
                    printf("Produto nao encontrado.\n");
                    break;
                }
                for(i=x;i<total-1;i++){
                    estoque[i]=estoque[i+1];

                }
                total--;
                printf("Removido com sucesso!\n");
            break;

            case 0:
                printf("Saindo...\n");
            break;

            default:
                printf("Opcao invalida!\n");
            break;
        }

    }while(op!=0);

return 0;
}
