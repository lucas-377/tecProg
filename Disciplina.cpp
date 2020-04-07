#include "Disciplina.h"

Disciplina::Disciplina(string areaConhecimento)
{
    departamentoAssociado = NULL;
    proximaDisciplina = NULL;
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
    departamento->insereDisciplina(this);
}

Departamento *Disciplina::getDepartamentoAssociado()
{
    return departamentoAssociado;
}

Disciplina::~Disciplina()
{
    departamentoAssociado = NULL;
    proximaDisciplina = NULL;
}
