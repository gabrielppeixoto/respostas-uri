#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, temp;
    vector<int> resp;

    cin >> num;
    while(num-- != 0)
    {
        cin >> temp;
        resp.push_back(temp);
    }

    for(int i = 0; i < resp.size(); i++)
    {
        cout << "resposta " << i+1 << ": " << resp[i] << endl;
    }
    return 0;
}
