// EXERCÍCIO 2.CPP

#include <iostream>
using namespace std;

int main(void)
{
    int numero, a = 1, b = 1, proximo;

    cout <<"Informe um numero: ";
    cin >> numero;

    while (proximo <= numero) {
        if (proximo != numero) {
            cout << numero <<" pertence a sequencia de Fibonacci.\n" << endl;
        }
        a = b;
        b = proximo;
        proximo = a + b;
    }

    cout << numero << " nao pertence a sequencia de Fibonacci" << endl;
    cout << "\nTecle <Enter> para encerrar... ";
    return 0;
}
