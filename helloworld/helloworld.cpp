#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> someMsg{"hello", "C++", "World", "from"};
    

    for(const string& someWord : someMsg)
    {
        cout << someWord << " ";

    }


    cout << endl;

}








