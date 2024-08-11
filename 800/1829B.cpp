#include <iostream>
using namespace std;
void proc();
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){ proc(); }
    return 0;
}
void proc(){
    int n;
    cin >> n;
    int count = 0;
    int biggest = 0;
    int a;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if(a == 0) {
            count++;
        }
        else {
            if (count > biggest && count != 0) {
                biggest = count;
            }
            count = 0;
        }

    }

    if (count > biggest && count != 0) {
        biggest = count;
    }
    cout << biggest << endl;
    
}