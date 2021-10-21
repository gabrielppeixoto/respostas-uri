#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int qtd, linha;
    vector<string> vet;

    cin >> qtd;
    while (qtd-- != 0)
    {
        cin >> linha;
        if(linha > 8000)
            vet.push_back("Mais de 8000!");
        else 
            vet.push_back("Inseto!");
    }

    for(string s : vet)
        cout << s << endl;
    
    return 0;
}
