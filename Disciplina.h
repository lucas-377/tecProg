#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include "Departamento.h"
#include "Aluno.h"

class Disciplina
{
private:
    // Atributos.
    int identificacao;
    string nome;
    string areaConhecimento;

    // Associação do Departamento.
    Departamento *departamentoAssociado;

public:
    // Construtor.
    Disciplina(string areaConhecimento = "");

    // Atributos da Lista de Disciplinas.
    Disciplina *proximaDisciplina;
    Disciplina *anteriorDisciplina;

    // Métodos.
    void setIdentificacao(int id);
    int getIdentificacao();
    void setNome(string nome);
    string getNome();
    void setDepartamento(Departamento *departamento);
    Departamento *getDepartamento();

    // Destrutor.
    ~Disciplina();
};

#endif // DISCIPLINA_H
