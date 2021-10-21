#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int secs, h, m, s;
    cin >> secs;
    s = secs % 60;
    m = secs / 60;
    h = secs / 3600;
    if(m >= 60)
    {
        m = m % 60;
    }    

    cout << h << ":" << m << ":" << s << endl;
    return 0;
}
