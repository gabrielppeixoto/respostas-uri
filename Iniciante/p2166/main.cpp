#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    double den = (N == 0 ? 1.0 : 2.0);
    cin >> N;
    
    for(int i = N; i > 0; i--)
    {
        den = 1 / den;
        den += (i == 1 ? 1.0 : 2.0);
    }

    cout << fixed << setprecision(10) << den << endl;
    return 0;
}
