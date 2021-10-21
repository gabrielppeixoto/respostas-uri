#include <iostream>
#include <vector>
using namespace std;

void imprime(vector<vector<int> >);

int main(int argc, char const *argv[])
{
    int num;
    vector< vector< vector<int> > > colecao;
    while(cin >> num)
    {
        vector< vector<int> > mat(num, vector<int>(num));
        for(int i = 0, k = mat.size()-1; i < mat.size(); i++, k--)
        {
            for(int j = 0; j < mat[0].size(); j++)
            {
                if(i == j)
                    mat[i][j] = 2;
            }
            mat[i][k] = 3;
        }
        for(int i = mat.size()/3; i < mat.size() - mat.size()/3; i++)
        {
            for(int j = mat[0].size()/3; j < mat[0].size() - mat[0].size()/3; j++)
                mat[i][j] = 1;
        }
        mat[mat.size()/2][mat.size()/2] = 4;
        colecao.push_back(mat);
    }
    for(vector<vector<int> > m : colecao)
    {
        imprime(m);
        cout << endl;
    }    

    return 0;
}

void imprime(vector<vector<int> > mat)
{
    for(vector<int> v : mat)
    {
        for(int i : v)
            cout << i;
        cout << endl;
    }
}