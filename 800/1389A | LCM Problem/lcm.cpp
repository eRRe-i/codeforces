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
    int a, b;
    cin >> a >> b;

    if(a*2 <= b) {
        cout << a << " " << a*2 << endl;
    }
    else {
        cout << "-1 -1" << endl;
    }
}