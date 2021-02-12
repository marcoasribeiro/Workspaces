#include "Tipo_Aluno.h"
#include<string.h>

    void set_nome(char novo_nome[]){
    strcpy(nome,novo_nome );

    }
    void set_telefone(char novo_Telefone[]){
    strcpy(telefone, novo_Telefone);

    }
    void set_nota(float novo_nota, int indice){
        if(indice>0 && indice<3){
        notas[indice]=novo_nota;
        return true;

    }

    void get_nome(char &nome[]);
    void get_telefone(char &telefone[]);
    float get_nota(int indice);
