#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    double volume, diametro;
    vector<double> altura, area;
    while (cin >> volume)
    {
        cin >> diametro;
        altura.push_back(volume/(3.14*(diametro/2)*(diametro/2)));
        area.push_back(3.14*(diametro/2)*(diametro/2));
    }

    for(int i = 0; i < altura.size(); i++)
    {
        cout << "ALTURA = " << fixed << setprecision(2) << altura[i] << endl;
        cout << "AREA = " << fixed << setprecision(2) << area[i] << endl;
    }
    
    
    return 0;
}
