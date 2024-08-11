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

    string s;
    cin >> s;

    string c = "codeforces";

    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        if(c[i] != s[i])
            count++;
    }
    
    cout << count << endl;
    return;
}