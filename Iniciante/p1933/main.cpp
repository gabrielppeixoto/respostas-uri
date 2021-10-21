#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    string linha, temp;
    vector<int> val;

    getline(cin, linha);
    stringstream str(linha);
    while(getline(str, temp, ' '))
        val.push_back(stoi(temp));
    
    int maior = val[0];
    if(val[1] > val[0])
        maior = val[1];
    
    cout << maior << endl;
    return 0;
}
