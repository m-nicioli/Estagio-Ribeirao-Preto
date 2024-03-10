// EXERCÍCIO 1

#include <iostream>
using namespace std;

int main(void)
{
    int INDICE = 13, SOMA = 0, K = 0;

    while(K >= INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
    }

    cout << "O valor da variável de soma e: " << SOMA << endl;

    cout << "\nTecle <Enter> para encerrar... ";
    return 0;

}
