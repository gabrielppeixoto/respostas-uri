#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    double x1,x2,y1,y2;
    string linha, interm;

    getline(cin, linha);
    stringstream stream(linha);
    vector<double> args;
    while(getline(stream, interm, ' '))
    {
        args.push_back(stod(interm));
    }
    getline(cin, linha);
    stringstream stream2(linha);
    while(getline(stream2, interm, ' '))
    {
        args.push_back(stod(interm));
    }

    x1 = args[0];
    y1 = args[1];
    x2 = args[2];
    y2 = args[3];

    double res = sqrt(pow((x2-x1), 2.0) + pow((y2-y1), 2.0));
    cout << fixed << setprecision(4) << res << endl;
    return 0;
}
