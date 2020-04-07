#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#include <iostream>

using namespace std;

class Universidade; // Referencia a classe Universidade.
class Disciplina; // Referencia a classe Disciplina.

class Departamento
{
private:
    // Atributos.
    string nome;

    // Referência a objeto associado da classe Universidade.
    Universidade *universidadeFiliado;

    // Associacao em lista da classe Disciplina.
    Disciplina *primeiraDisciplina;
    Disciplina *atualDisciplina;

public:
    // Construtor.
    Departamento();

    // Métodos.
    void setNome(string nome);
    string getNome();
    void setUniversidadeFiliado(Universidade *universidade); // Associa uma Universidade a um Departamento.
    void getUniversidadeFiliado(); // Informa Universidade que esta associada ao Departamento.
    void insereDisciplina(Disciplina *disciplina);
    void listaDisciplinas();
    void listaDisciplinas2();

    // Destrutor.
    ~Departamento();
};

#endif // DEPARTAMENTO_H
