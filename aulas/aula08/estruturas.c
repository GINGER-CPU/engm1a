#include <stdio.h>

int main() {
  // tipo personalizado  
  struct contato_t {
     char nome[61];
     long int telefone;
  };

  struct ponto_t {
    int x;
    int y;
  };

  struct aluno_t {
    int matricula;
    char nome[61];
    char email[61];
    long int telefone;
  };

  struct contato_t contato;

  printf("Preencha com os dados do contato:\n");
  printf("Nome: ");
  scanf("%[^\n]s", contato.nome);
  while(getchar() != '\n');
  printf("Telefone: ");
  scanf("%li", &contato.telefone);
  while(getchar() != '\n');

  printf("Seu contato: %s - %li\n", contato.nome,
    contato.telefone);

    struct contato_t contatos[10];
    
    for (int i=0;i<10;i++){
        printf("contato%i\n",i+1);
        printf("nome:");
        scanf("%[^\n]s",contatos[i].nome);
        printf("telefone:");
        scanf("%li",&contatos[i].telefone);
        while (getchar() != '\n');
    }
    
    printf("Suas agenda de contatos\n");
    for(int i=0 ;i<10;i++){
        printf("%s -%li\n",contatos[i].nome,contatos[i].telefone);
    }
    
    // buscando contato 

    if (achei<0){
        printf (" o contato%i nao foi encontrado\n",)
    }else{
        printf("achei o contato %s -%li\n",,contatos[])
    }



  return 0;
}