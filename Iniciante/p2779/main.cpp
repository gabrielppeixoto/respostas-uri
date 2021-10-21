#include <iostream>
#include <vector>
using namespace std;

bool contains(vector<int>,int);

int main(int argc, char const *argv[])
{
    int N, M, linha, cont = 0;
    vector<int> reg;
    cin >> N;
    cin >> M;
    while(M-- != 0)
    {
        cin >> linha;
        if(!contains(reg, linha))
            reg.push_back(linha);
    }
    cout << N - reg.size() << endl;
    return 0;
}

bool contains(vector<int> vet, int i)
{
    for(int j : vet)
        if(i == j)
            return true;
    return false;
}