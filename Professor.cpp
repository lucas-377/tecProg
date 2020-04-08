#include "Professor.h"

Professor::Professor() :
    Pessoa()
{
    universidadeFiliado = NULL;
    departamentoFiliado = NULL;
}

Professor::Professor(int diaNasc, int mesNasc, int anoNasc, string nome) :
    Pessoa(diaNasc, mesNasc, anoNasc, nome)
{
    universidadeFiliado = NULL;
    departamentoFiliado = NULL;
}

void Professor::getUniversidadeFiliado()
{
    cout << getNome() << " trabalha para a " << universidadeFiliado->getNome() << endl;
}

void Professor::setUniversidadeFiliado(Universidade *universidade)
{
    universidadeFiliado = universidade;
}

void Professor::getDepartamentoFiliado()
{
    cout << departamentoFiliado->getNome() << endl;
}

void Professor::setDepartamentoFiliado(Departamento *departamento)
{
    departamentoFiliado = departamento;
}

Professor::~Professor()
{
}
