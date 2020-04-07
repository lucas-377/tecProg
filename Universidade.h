#ifndef UNIVERSIDADE_H
#define UNIVERSIDADE_H

#include "Departamento.h"

#include <iostream>
#include <vector>

using namespace std;

class Universidade
{
private:
    // Atributos.
    string nome;

    // Refer�ncia a objeto associado da classe Departamento em uma lista do tipo vector.
    vector <Departamento*> departamentoFiliado; // inicializado em NULL automaticamente.

public:
    // Construtor.
    Universidade(); // Sem par�metros.

    // M�todos.
    void setNome(string nome);
    string getNome();
    void setDepartamento(Departamento *departamento); // Associa um Departamento a Universidade.
    void imprimeDepartamentos();

    // Destrutor.
    ~Universidade();
};

#endif // UNIVERSIDADE_H
