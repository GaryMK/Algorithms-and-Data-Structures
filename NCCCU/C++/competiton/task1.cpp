#include <iostream>
using namespace std;
int main() {
    string str;
    while(cin >> str)
    {
        for(int i = 0; i < str.length(); i++)
        {
            if (str[i] >= 'a' && str[i] <= 'c')
                cout << 2;
            else if (str[i] >= 'd' && str[i] <= 'f')
                cout << 3;
            else if (str[i] >= 'g' && str[i] <= 'i')
                cout << 4;
            else if (str[i] >= 'j' && str[i] <= 'l')
                cout << 5;
            else if (str[i] >= 'm' && str[i] <= 'o')
                cout << 6;
            else if (str[i] >= 'p' && str[i] <= 's')
                cout << 7;
            else if (str[i] >= 't' && str[i] <= 'v')
                cout << 8;
            else if (str[i] >= 'w' && str[i] <= 'z')
                cout << 9;
        }
        cout << '\n';
    }
    return 0;
}
