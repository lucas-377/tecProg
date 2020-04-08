#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Pessoa.h"
#include "Universidade.h"

class Professor : public Pessoa
{
private:
    // Referência a objeto associado da classe Universidade.
    Universidade *universidadeFiliado;

    // Referência a objeto associado da classe Departamento.
    Departamento *departamentoFiliado;

public:
    // Função construtora.
    Professor(); // Sem parâmetros.
    Professor(int diaNasc, int mesNasc, int anoNasc, string nome = "");

    // Métodos.
    void setUniversidadeFiliado(Universidade *universidade); // Associa uma Universidade a um Professor.
    void getUniversidadeFiliado(); // Informa a Universidade que o Professor trabalha.
    void setDepartamentoFiliado(Departamento *departamento); // Associa um Departamento a um Professor.
    void getDepartamentoFiliado(); // Informa o Departamento que o Professor trabalha.

    // Destrutor.
    ~Professor();
};

#endif // PROFESSOR_H
