#ifndef ALUNO_H
#define ALUNO_H

#include "Pessoa.h"

class Aluno : public Pessoa
{
private:
    // Atributos.
    int registroAcademico;

public:
    // Função construtora.
    Aluno(); // Sem parâmetros.
    Aluno(int diaNasc, int mesNasc, int anoNasc, string nome = "");

    // Métodos.
    void getRegistroAcademico();
    void setRegistroAcademico(int RA);

    // Destrutor.
    ~Aluno();
};

#endif // ALUNO_H
