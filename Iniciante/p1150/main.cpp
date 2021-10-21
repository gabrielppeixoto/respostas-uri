#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x, z;
    int acum = 1, qt = 0;

    cin >> x;
    do
    {
        cin >> z;
    }while(z <= x);

    qt = x;

    while(qt <= z)
    {
        qt += x;
        x++;
        acum++;
    }

    cout << acum << endl;
    return 0;
}
