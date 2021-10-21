#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int X;
    double Y, cons;

    cin >> X;
    cin >> Y;

    cout << fixed << setprecision(3) << X/Y << " km/l" << endl;
    return 0;
}
