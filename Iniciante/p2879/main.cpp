#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int game(int);

int main(int argc, char const *argv[])
{
    int numg, prem, vencidas = 0;
    cin >> numg;
    while (numg != 0)
    {
        cin >> prem;
        vencidas += game(prem);
        numg--;
    }
    cout << vencidas << endl;
    return 0;
}

int game(int premiada)
{
    if(premiada == 1)
        return 0;
    else
        return 1; 
    
}