#include <iostream>
#include <vector>
using namespace std;

vector< vector<int> > preencheMatriz(int);
void imprimeMatriz(int);
void imprime(vector<int>);

int main(int argc, char const *argv[])
{
    vector<int> v;
    int ent;

    do
    {
        cin >> ent;
        v.push_back(ent);
    } while (ent != 0);

    imprime(v);
    

    return 0;
}

vector< vector<int> > preencheMatriz(int n)
{
    vector< vector<int> > mat;
    for(int i = 0; i < n; i++)
    {
        mat[i][i] = 1;
    }
    for(int i = 0; i < n; i++)
    {
        int cont = 1;
        for(int j = 0; j < n; j++)
        {
            if(i == j) continue;
            mat[i][j] = mat[j][i] = cont;
            cont++;
        }
        cont = 1;
    }
}

void imprimeMatriz(int num)
{
    if(num == 0) return;
    for(int i = 1; i <= num; i++)
    {
        for(int j = 1; j <= num; j++)
        {
            if(j == num)
                cout << j;
            else
                cout << j << "   ";
        }
        cout << endl;
    }
    cout << endl;
}

void imprime(vector<int> v)
{
    for(int i : v)
        imprimeMatriz(i);
}