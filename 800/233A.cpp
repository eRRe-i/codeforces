#include <iostream>
using namespace std;

int main ()
{

    int n;
    cin >> n;

    if(n%2 != 0 || n == 0) {
        cout << -1 << endl;
        return 0;
    }

    for (int i=0; i<n; i = i+2)
    {
        cout << i+2 << " " << i+1 << " ";
    }
    return 0;
}