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
    string v;
    cin >> v;

    int max_c  = 0;

    for (int i = 0; i < n; i++)
    {
        if(v[i] - 'a' > max_c) {
            max_c = v[i] - 'a';
        }
    }
    
    cout << max_c+1 << endl;
    return;
}