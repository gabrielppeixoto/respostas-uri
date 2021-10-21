#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    string str;
    getline(cin, str);
    num = stoi(str);
    for(int i = 0; i < num; i++)
        getline(cin, str);
    
    for(int i = 0; i < num; i++)
        cout << "I am Toorg!" << endl;
    return 0;
}
