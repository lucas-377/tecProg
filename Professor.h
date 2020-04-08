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
    Professor(); // Sem par�metros.
    Professor(int diaNasc, int mesNasc, int anoNasc, string nome = "");

    // M�todos.
    void setUniversidadeFiliado(Universidade *universidade); // Associa uma Universidade a um Professor.
    void getUniversidadeFiliado(); // Informa a Universidade que o Professor trabalha.
    void setDepartamentoFiliado(Departamento *departamento); // Associa um Departamento a um Professor.
    void getDepartamentoFiliado(); // Informa o Departamento que o Professor trabalha.

    // Destrutor.
    ~Professor();
};

#endif // PROFESSOR_H
