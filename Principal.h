#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include "Professor.h"
#include "Aluno.h"
#include "Universidade.h"
#include "Disciplina.h"

#include<time.h>

class Principal
{
private:
    // Atributos.
    int diaAtual; int mesAtual; int anoAtual;

    // Professores.
    Professor Einstein, Newton;

    // Alunos.
    Aluno Lucas;

    // Universidades.
    Universidade UTFPR, Princeton, Cambridge;

    // Departamentos.
    Departamento Fisica, Matematica, Informatica, Design;

    // Disciplinas.
    Disciplina TecProg;

public:
    //Fun��o construtora.
    Principal();

    // Inicializa��es.
    void inicializa();
    void inicializaUniversidades();
    void inicializaDepartamentos();
    void inicializaProfessores();
    void inicializaDisciplinas();
    void inicializaAlunos();

    // M�todos.
    void executar();
    void separarLinha();
    void listarDisciplinasDepto();

    // Destrutor.
    ~Principal();
};

#endif // PRINCIPAL_H
