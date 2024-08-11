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
    int value;
    int values;
    int count = 0;

    cin >> value;

    for (int i = 0; i < 3; i++)
    {
        cin >> values;
        if (values > value) {
            count++;
        }
    }

    cout << count << endl;
    return;
}