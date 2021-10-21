#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int numl;
    string linha, temp;
    vector<double> numeros, res;

    getline(cin, linha);
    numl = stoi(linha);
    while(numl-- != 0)
    {
        getline(cin, linha);
        stringstream stream(linha);
        while(getline(stream, temp, ' '))
            numeros.push_back(stod(temp));
        double media = (2*numeros[0] + 3*numeros[1] + 5*numeros[2])/(2+3+5);
        res.push_back(media);
        numeros.clear();
    }

    for(double i : res)
    {
        cout << fixed << setprecision(1) << i << endl;
    }
    return 0;
}
