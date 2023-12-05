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

    int a,b,c;
    cin >> a >> b >> c;

    int f, s;

    if(a == 1) {
        f = 0;
    } else {
        f = a-1;
    }

    if(c == 1) {
        s = b - c;
    } else {
        s = abs(b-c) + c - 1; 
    }

    // cout << "- " << f << " " << s << endl;

    if(s > f) {
        cout << 1 << endl;
    } else if (f > s) {
        cout << 2 << endl;
    } else {
        cout << 3 << endl;
    }

    return;
}