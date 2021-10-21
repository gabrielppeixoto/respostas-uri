#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

struct grafom
{
    vector<vector<int> > matriz;
    bool dirigido;
};
typedef struct grafom* GrafoMt;

//Inicializa a estrutura de dados;
//O tamanho da matriz criada será equivalente ao
//número de vértices
GrafoMt criarGrafoM(int tam, bool dir)
{
    GrafoMt g = new grafom;
    vector<vector<int> > vcol(tam);
    for(int i = 0; i < tam; i++)
        vcol[i] = vector<int>(tam);
    g->matriz = vcol;
    g->dirigido = dir;
    return g;
}

//Insere uma aresta entre dois vértices
void inserirArestaM(GrafoMt g, int v1, int v2)
{
    if(g->dirigido)
    {
        g->matriz[v1][v2] = 1;
    }
    else
    {
        g->matriz[v1][v2] = 1;
        g->matriz[v2][v1] = 1;
    }
}

void excluirGrafoM(GrafoMt g)
{
    delete g;
}

void imprimir(vector< vector<int> > mat)
{
    for(vector<int> v : mat)
    {
        for(int i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}


int main(int argc, char const *argv[])
{
    int numRuas;
    string linha, linhaTok;
    vector<int> info;
    getline(cin, linha);
    numRuas = stoi(linha);

    GrafoMt g = criarGrafoM(numRuas, true);

    for(int i = 0; i < numRuas; i++)
    {
        getline(cin, linha);
        stringstream stream(linha);
        while(getline(stream, linhaTok, ' '))
        {
            info.push_back(stoi(linhaTok));
        }
        int numAcessiveis = info[1];
        if(numAcessiveis == 0){
            info.clear();
            continue;
        }
        for(int j = 2; j < info.size(); j++)
            inserirArestaM(g, info[0], info[j]);
        info.clear();
    }
    //imprimir(g->matriz);
    for(int i = 0; i < g->matriz.size(); i++)
    {
        int cont = 0;
        for(int j = 0; j < g->matriz[0].size(); j++)
        {
            if(g->matriz[i][j] == 1)
                break;
            else 
                cont++;
            if(cont == g->matriz.size())
                cout << "TRAPPED " << i << endl;
        }
    }
    excluirGrafoM(g);
    return 0;
}
