#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    string linha, temp;
    vector<int> vals;
    getline(cin, linha);
    stringstream stream(linha);
    while(getline(stream, temp, ' '))
    {
        if(stoi(temp) <= 0)
            continue;
        vals.push_back(stoi(temp));
    }
    int A = vals[0];
    int N = vals[1];
    int acum = 0;
    for(int i = N-1; i >= 0; i--)
    {
        acum += A + i;
    }
    cout << acum << endl;
    return 0;
}
