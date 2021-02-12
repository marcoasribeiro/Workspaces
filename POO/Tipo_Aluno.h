#ifndef TIPO_ALUNO_H_INCLUDED
#define TIPO_ALUNO_H_INCLUDED

 class TIPO_ALUNO_H_INCLUDED{
    private
        char nome[50];
        char telefone[15];
        char notas[3];

    public
        void set_nome(char nome[]);
        void set_telefone(char telefone[]);
        void set_nota(float nota, int indice);

        void get_nome(char &nome[]);
        void get_telefone(char &telefone[]);
        float get_nota(int indice);




 };

#endif // TIPO_ALUNO_H_INCLUDED
