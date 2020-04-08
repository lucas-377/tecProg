#include "Disciplina.h"

Disciplina::Disciplina()
{
    departamentoAssociado = NULL;
    proximaDisciplina = NULL;
    anteriorDisciplina = NULL;
    areaConhecimento = "";
    this->nome = "";
}

void Disciplina::setAreaConhecimento(string areaConhecimento)
{
    this->areaConhecimento = areaConhecimento;
}

string Disciplina::getAreaConhecimento()
{
    return areaConhecimento;
}

void Disciplina::setIdentificacao(int id)
{
    identificacao = id;
}

int Disciplina::getIdentificacao()
{
    return identificacao;
}

void Disciplina::setNome(string nome)
{
    this->nome = nome;
}

string Disciplina::getNome()
{
    return nome;
}

void Disciplina::setDepartamento(Departamento *departamento)
{
    departamentoAssociado = departamento;
}

Departamento *Disciplina::getDepartamento()
{
    cout << departamentoAssociado->getNome() << " possui a disciplina de " << getNome() << endl;
}

Disciplina::~Disciplina()
{
    departamentoAssociado = NULL;
    proximaDisciplina = NULL;
    anteriorDisciplina = NULL;
}
