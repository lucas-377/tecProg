#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include "Professor.h"
#include "Aluno.h"
#include "Universidade.h"
#include "Disciplina.h"

#include <time.h>

class Principal
{
private:
    // Atributos.
    int diaAtual; int mesAtual; int anoAtual;

    // Professores.
    Professor Einstein, Newton, Simao;

    // Alunos.
    Aluno Lucas;

    // Universidades.
    Universidade UTFPR, Princeton, Cambridge;

    // Departamentos.
    Departamento Fisica, Matematica, Informatica;

    // Disciplinas.
    Disciplina TecProg;

public:
    //Função construtora.
    Principal();

    // Inicializações.
    void inicializa();
    void inicializaUniversidades();
    void inicializaDepartamentos();
    void inicializaProfessores();
    void inicializaDisciplinas();
    void inicializaAlunos();

    // Métodos.
    void executar();
    void calculoIdades();
    void separarLinha();

    // Destrutor.
    ~Principal();
};

#endif // PRINCIPAL_H
