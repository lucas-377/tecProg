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
    cout << getNome() << " pertence a " << universidadeFiliado->getNome() << endl;
}

void Departamento::setUniversidadeFiliado(Universidade *universidade)
{
    universidadeFiliado = universidade;
}

void Departamento::insereDisciplina(Disciplina *disciplina)
{
    disciplina->setDepartamento(this); // Insere a Disciplina no Departamento.

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
        cout << "A disciplina " << auxiliar->getNome() << " pertence ao " << getNome() << endl;
        auxiliar = auxiliar->proximaDisciplina;
    }
}

void Departamento::listaDisciplinas2()
{
    Disciplina *auxiliar;

    auxiliar = atualDisciplina;

    while (auxiliar != NULL)
    {
        cout << "A disciplina " << auxiliar->getNome() << " pertence ao " << getNome() << endl;
        auxiliar = auxiliar->anteriorDisciplina;
    }
}

Departamento::~Departamento()
{
    primeiraDisciplina = NULL;
    atualDisciplina = NULL;
}
