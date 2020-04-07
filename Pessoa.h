#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>

using namespace std;

class Pessoa
{
protected:
    // Atributos.
    int dia, mes, ano, idade;
    string nome;

public:
    // Fun��o construtora.
    Pessoa(int diaNasc, int mesNasc, int anoNasc, string nome);
    Pessoa(); // Sem parametros.

    // M�todos.
    void calculaIdade(int diaAtual, int mesAtual, int anoAtual);
    void inicializar(int diaNasc, int mesNasc, int anoNasc, string nome = "");
    int getIdade();

    // Destrutor.
    ~Pessoa();
};

#endif // PESSOA_H
