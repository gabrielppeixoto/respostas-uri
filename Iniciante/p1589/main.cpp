#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int T, R1, R2;
    cin >> T;
    string linha, temp;
    vector<int> args, resps;
    
    while(T-- != 0)
    {
        getline(cin, linha);
        stringstream stream(linha);
        while(getline(stream, temp, ' '))
            args.push_back(stoi(temp));
        R1 = args[0];
        R2 = args[1];
        resps.push_back(R1+R2);
    }
    for(int i : resps)
        cout << i << endl;
    return 0;
}
