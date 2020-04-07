#include "Professor.h"

Professor::Professor(int diaNasc, int mesNasc, int anoNasc, string nome) :
    Pessoa(diaNasc, mesNasc, anoNasc, nome)
{
    universidadeFiliado = NULL;
    departamentoFiliado = NULL;
}

Professor::Professor() :
    Pessoa()
{
    universidadeFiliado = NULL;
    departamentoFiliado = NULL;
}

void Professor::getUniversidadeFiliado()
{
    cout << nome << " trabalha para a " << universidadeFiliado->getNome() << endl;
}

void Professor::setUniversidadeFiliado(Universidade *universidade)
{
    universidadeFiliado = universidade;
}

void Professor::getDepartamentoFiliado()
{
    cout << departamentoFiliado->getNome() << endl << endl;;
}

void Professor::setDepartamentoFiliado(Departamento *departamento)
{
    departamentoFiliado = departamento;
}

Professor::~Professor()
{
}
