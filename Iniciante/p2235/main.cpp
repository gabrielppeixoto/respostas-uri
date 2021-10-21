#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> nums;
    string linha, lintok;
    getline(cin, linha);
    stringstream stream(linha);
    while(getline(stream, lintok, ' '))
    {
        nums.push_back(stoi(lintok));
    }

    int a = nums[0], b = nums[1], c = nums[2];
    if(a + b + c == 0 || a + b - c == 0 || a - b + c == 0 || a - b - c == 0 ||
        -a + b + c == 0 || -a + b - c == 0 || -a - b + c == 0 ||
        -a - b - c == 0 || a + b == 0 || a - b == 0 || -a + b == 0 ||
        -a - b == 0 || a + c == 0 || a - c == 0 || -a + c == 0 || -a - c == 0 ||
        b + c == 0 || b - c == 0 || -b + c == 0 || -b - c == 0 || a == 0 ||
        b == 0 || c == 0)
        cout << "S" << endl;
    else
        cout << "N" << endl;
    return 0;
}
