#include "Pessoa.h"

Pessoa::Pessoa()
{
    inicializar(0, 0, 0);
}

Pessoa::Pessoa(int diaNasc, int mesNasc, int anoNasc, string nome)
{
    inicializar(diaNasc, mesNasc, anoNasc, nome);
}

void Pessoa::calculaIdade(int diaAtual, int mesAtual, int anoAtual)
{
    idade = anoAtual - ano;
    if (mes > mesAtual)
        idade -= 1;
    else
    {
        if (mes == mesAtual)
            if (dia > diaAtual)
                idade -= 1;
    }

    cout << "A idade de " << nome << " seria: " << getIdade() << endl;
}

int Pessoa::getIdade()
{
    return idade;
}

void Pessoa::inicializar(int diaNasc, int mesNasc, int anoNasc, string nome)
{
    dia = diaNasc;
    mes = mesNasc;
    ano = anoNasc;
    idade = -1;
    this->nome = nome;
}

Pessoa::~Pessoa()
{
}
