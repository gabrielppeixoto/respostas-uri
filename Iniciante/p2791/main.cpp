#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    string linha, temp;
    int pos;
    vector<int> vet;
    getline(cin, linha);
    stringstream str(linha);
    while(getline(str, temp, ' '))
        vet.push_back(stoi(temp));
    for(int i = 0; i < vet.size(); i++)
        if(vet[i] ==1)
            pos = i;
    cout << pos + 1 << endl;
    return 0;
}
