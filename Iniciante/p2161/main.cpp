#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int rept;
    double acum = 0.0, res = 3.0;
    cin >> rept;
    while(rept != 0)
    {
        acum = 1 / (6 + acum);
        rept--;
    }
    res += acum;

    cout << fixed << setprecision(10) << res << endl;
    return 0;
}
