#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    string linha, temp, acao;
    int numAbas, numAcoes;
    vector<int> vet;

    getline(cin, linha);
    stringstream stream(linha);
    while(getline(stream, temp, ' '))
    {
        vet.push_back(stoi(temp));
    }

    numAbas = vet[0];
    numAcoes = vet[1];

    while(numAcoes-- != 0)
    {
        getline(cin, acao);
        if(acao.compare("fechou") == 0)
            numAbas++;
        else if(acao.compare("clicou") == 0)
            numAbas--;
    }

    cout << numAbas << endl;
    return 0;
}
