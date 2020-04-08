#include "Departamento.h"
#include "Universidade.h"
#include "Disciplina.h"

Departamento::Departamento()
{
    this->nome = "";
    primeiraDisciplina = NULL;
    atualDisciplina = NULL;
}

void Departamento::setNome(string nome)
{
    this->nome = nome;
}

string Departamento::getNome()
{
    return nome;
}

Universidade* Departamento::getUniversidadeFiliado()
{
    cout << universidadeFiliado->getNome() << endl;
}

void Departamento::setUniversidadeFiliado(Universidade *universidade)
{
    universidadeFiliado = universidade;
}

void Departamento::insereDisciplina(Disciplina *disciplina)
{
    if (primeiraDisciplina == NULL)
    {
        primeiraDisciplina = disciplina;
        atualDisciplina = disciplina;
    }

    else
    {
        atualDisciplina->proximaDisciplina = disciplina;
        disciplina->anteriorDisciplina = atualDisciplina;
        atualDisciplina = disciplina;
    }
}

void Departamento::listaDisciplinas()
{
    Disciplina *auxiliar;

    auxiliar = primeiraDisciplina;

    while (auxiliar != NULL)
    {
        cout << "A disciplina " << auxiliar->getNome() << " Pertence ao " << this->getNome() << endl;
        auxiliar = auxiliar->proximaDisciplina;
    }
}

void Departamento::listaDisciplinas2()
{
    Disciplina *auxiliar;

    auxiliar = atualDisciplina;

    while (auxiliar != NULL)
    {
        cout << "A disciplina " << auxiliar->getNome() << " Pertence ao " << this->getNome() << endl;
        auxiliar = auxiliar->anteriorDisciplina;
    }
}

Departamento::~Departamento()
{
    primeiraDisciplina = NULL;
    atualDisciplina = NULL;
}
