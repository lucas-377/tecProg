#include "Aluno.h"

Aluno::Aluno() :
    Pessoa()
{

}

Aluno::Aluno(int diaNasc, int mesNasc, int anoNasc, string nome) :
    Pessoa(diaNasc, mesNasc, anoNasc, nome)
{

}

void Aluno::getRegistroAcademico()
{
    cout << nome << " RA: " << registroAcademico << endl;
}

void Aluno::setRegistroAcademico(int RA)
{
    registroAcademico = RA;
}

Aluno::~Aluno()
{
}
