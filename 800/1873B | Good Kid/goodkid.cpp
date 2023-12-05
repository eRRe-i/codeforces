#include <iostream>
#include <algorithm>
#include <vector>
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
    int values[n];

    for (int i = 0; i < n; i++)
    {
        cin >> values[i];
    }

    vector<int> vec(values, values+n);

    sort(vec.begin(), vec.end());
    vec[0]++;
    int acc = 1;
    for (int i = 0; i < n; i++)
    {
        acc = acc * vec[i];
        // cout << vec[i] << " ";
    }
    
    cout << acc << endl;
    return;
}
