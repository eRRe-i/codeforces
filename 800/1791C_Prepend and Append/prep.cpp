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

    int n;
    cin >> n;
    string s;
    cin >> s;

    for(int i=0, j=n-1; i<j; i++, j--) {
//       cout << s[i] << " " << s[j] << " " << s[i] + s[j] << endl;
        if(s[i] - '0' + s[j] - '0' == 1) { 
            n = n-2;
        } else {
            break;
        }
    }

    cout << n << endl;

    return;
}