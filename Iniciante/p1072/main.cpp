#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numl, numero, cIn = 0, cOut = 0;
    cin >> numl;
    while(numl-- != 0)
    {
        cin >> numero;
        if(numero >= 10 && numero <= 20)
            cIn++;
        else
            cOut++;
    }
    cout << cIn << " in" << endl;
    cout << cOut << " out" << endl;
    return 0;
}
