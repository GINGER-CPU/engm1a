#include <stdio.h>
#include <stdbool.h>

int main() {
    enum dias_da_ semana_e{
        domingo,
        segunda,
        terça,
        quarta,
        quinta,
        sexta,
        sabado,
    };

    enum meses_do _ano_e{
        janeiro =1,
        fevereiro,
        marco,
        abril,
        maio,
        junho,
        julho,
        agosto,
        setembro,
        outubro,
        novembro,
        dezembro,
    };

    enum  sexo {
        masculuno,
        feminino,

    };
    enum  tipo_contato_e {
        particular,
        publico,

    };
    struct contato_t {
        char nome [61];
        long int telefone;
        enum tipo_contato_e tipo;
    };
    bool esta_ presente ;
    esta_presente =false;
    return 0;
}