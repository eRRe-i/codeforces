#include <iostream>
#include <bits/stdc++.h>
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
    int init[3]; 
    for(int i=0; i<3; i++) {
        cin >> init[i];
    }

    if(accumulate(init, init+3, 0) == (*max_element(init, init + 3)*2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return;
}