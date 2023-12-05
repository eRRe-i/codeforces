#include <iostream>
using namespace std;

void proc();

int main ()
{

    int n;
    cin >> n;

    for (int i=0; i<n; i++)
    {
        proc();
    }

    return 0;
}

void proc()
{

    int a;
    cin >> a;

    string value;
    int x = 0, y = 0;

    cin >> value;

    for(int i=0; i < a; i++ )  {

        switch (value[i])
        {
        case 'R':
            x++;
            break;
        case 'L':
            x--;
            break;
        case 'D':
            y--;
            break;
        case 'U':
            y++;
            break;
        default:
            break;
        }

        if(x == 1 && y == 1) {
            cout << "YES" << endl;
            return;
        }
    } 

    cout << "NO" << endl;
    return;
}