#include "Disciplina.h"

Disciplina::Disciplina(string areaConhecimento)
{
    departamentoAssociado = NULL;
    proximaDisciplina = NULL;
    anteriorDisciplina = NULL;
    this->areaConhecimento = areaConhecimento;
    this->nome = "";
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
    //departamento->insereDisciplina(this); // Inclui Disciplina no Departamento.
}

Departamento *Disciplina::getDepartamento()
{
    cout << departamentoAssociado->getNome() << endl;
}

Disciplina::~Disciplina()
{
    departamentoAssociado = NULL;
    proximaDisciplina = NULL;
    anteriorDisciplina = NULL;
}
