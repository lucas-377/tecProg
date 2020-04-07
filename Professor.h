#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Pessoa.h"
#include "Universidade.h"

class Professor : public Pessoa
{
private:
    // Refer�ncia a objeto associado da classe Universidade.
    Universidade *universidadeFiliado;

    // Refer�ncia a objeto associado da classe Departamento.
    Departamento *departamentoFiliado;

public:
    // Fun��o construtora.
    Professor(int diaNasc, int mesNasc, int anoNasc, string nome = "");
    Professor(); // Sem par�metros.

    // M�todos.
    void setUniversidadeFiliado(Universidade *universidade); // Associa uma Universidade a um Professor.
    void setDepartamentoFiliado(Departamento *departamento); // Associa um Departamento a um Professor.
    void getUniversidadeFiliado(); // Informa a Universidade que o Professor trabalha.
    void getDepartamentoFiliado(); // Informa o Departamento que o Professor trabalha.

    // Destrutor.
    ~Professor();
};

#endif // PROFESSOR_H
