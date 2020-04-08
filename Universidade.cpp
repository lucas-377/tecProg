#include "Universidade.h"

Universidade::Universidade()
{
    this->nome = "";
}

void Universidade::setNome(string nome)
{
    this->nome = nome;
}

string Universidade::getNome()
{
    return nome;
}

void Universidade::setDepartamento(Departamento *departamento)
{
    departamentoFiliado.push_back(departamento); // Insere o Departamento no fim do vector.
    departamento->setUniversidadeFiliado(this); // Associa Universidade ao Departamento.
}

void Universidade::imprimeDepartamentos()
{
    int tamanho = departamentoFiliado.size();

    cout << getNome() << " possui: " << endl;

    for (int i = 0; i < tamanho; i++)
        cout << departamentoFiliado[i]->getNome() << endl;
}

Universidade::~Universidade()
{
}
