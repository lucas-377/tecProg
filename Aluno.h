#ifndef ALUNO_H
#define ALUNO_H

#include "Pessoa.h"

class Aluno : public Pessoa
{
private:
    // Atributos.
    int registroAcademico;

public:
    // Fun��o construtora.
    Aluno(); // Sem par�metros.
    Aluno(int diaNasc, int mesNasc, int anoNasc, string nome = "");

    // M�todos.
    void getRegistroAcademico();
    void setRegistroAcademico(int RA);

    // Destrutor.
    ~Aluno();
};

#endif // ALUNO_H
