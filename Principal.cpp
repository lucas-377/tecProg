#include "Principal.h"

Principal::Principal():
    // Construtora sem parametro explicitada.
    Einstein(),
    Newton(),
    Lucas()
{
    // Adquire a data atual do sistema.
    struct tm *local; // Estrutura contendo as variaveis do calendario.
    time_t segundos; // Variavel contendo a data atual em segundos.
    time(&segundos); // Obtendo o tempo em segundos.
    local = localtime(&segundos); // Converte de segundos para o tempo local.

    // Salva a data atual em variaveis.
    diaAtual = local->tm_mday;
    mesAtual = local->tm_mon + 1;
    anoAtual = local->tm_year + 1900; // Adiciona 1900 pois o sistema retorna a partir desse ano.

    inicializa();
}

void Principal::inicializa()
{
    inicializaUniversidades();
    inicializaDepartamentos();
    inicializaProfessores();
    inicializaDisciplinas();
    inicializaAlunos();
}

void Principal::inicializaUniversidades()
{
    // Nomeia Universidades.
    UTFPR.setNome("Universidade Tecnologica Federal do Parana");
    Princeton.setNome("Universidade de Princeton");
    Cambridge.setNome("Universidade de Cambridge");

    // Associação (agregacao fraca) dos Departamentos as Universidades por referência.
    Princeton.setDepartamento(&Fisica);
    Cambridge.setDepartamento(&Matematica);
}

void Principal::inicializaDepartamentos()
{
    // Nomeia Departamentos.
    Fisica.setNome("Departamento de Fisica");
    Matematica.setNome("Departamento de Matematica");

    // Referencia Universidade do Departamento filiado.
    Fisica.setUniversidadeFiliado(&Princeton);
    Matematica.setUniversidadeFiliado(&Cambridge);
}

void Principal::inicializaProfessores()
{
    // Inicialização dos objetos da classe Professor.
    Einstein.inicializar(14, 3, 1879, "Albert Einstein");
    Newton.inicializar(4, 1, 1643, "Isaac Newton");

    // Filiação (agregacao fraca) dos Professores as Universidades por referência.
    Einstein.setUniversidadeFiliado(&Princeton);
    Newton.setUniversidadeFiliado(&Cambridge);

    // Filiação (agregacao fraca) dos Professores aos Departamentos por referência.
    Einstein.setDepartamentoFiliado(&Fisica);
    Newton.setDepartamentoFiliado(&Matematica);
}

void Principal::inicializaDisciplinas()
{
    // Nomeia Disciplinas.
    TecProg.setNome("Tecnicas de Programacao");

    // Agrega Disciplina ao Departamento.
    Informatica.insereDisciplina(&TecProg);

    // Associa Departamento a Disciplina.
    TecProg.setDepartamento(&Informatica);
}

void Principal::inicializaAlunos()
{
    // Inicialização dos objetos da classe Aluno.
    Lucas.inicializar(1, 11, 1992, "Lucas Santana");
}

void Principal::executar()
{
    separarLinha();

    // Executa o calculo da idade.
    Einstein.calculaIdade(diaAtual, mesAtual, anoAtual);
    Newton.calculaIdade(diaAtual, mesAtual, anoAtual);
    Lucas.calculaIdade(diaAtual, mesAtual, anoAtual);

    separarLinha();

    // Informa a Universidade e Departamento em que o Professor trabalha.
    Einstein.getUniversidadeFiliado();
    Einstein.getDepartamentoFiliado();

    Newton.getUniversidadeFiliado();
    Newton.getDepartamentoFiliado();

    separarLinha();

    // Informa Departamentos pertencentes a Universidade.
    Princeton.imprimeDepartamentos();
    // Informa Universidade referenciada ao Departamento.
    Fisica.getUniversidadeFiliado();

    separarLinha();

    // Define o Registro Academico do Aluno.
    Lucas.setRegistroAcademico(2126702);
    // Imprime o Registro Academico.
    Lucas.getRegistroAcademico();

    separarLinha();

    Informatica.listaDisciplinas();
    //TecProg.getDepartamento();
}

void Principal::separarLinha()
{
    cout << "\n========================================\n" << endl;
}

Principal::~Principal()
{
}
