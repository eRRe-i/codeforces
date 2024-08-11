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
    int a, b, c;
    cin >> a >> b >> c;

    int count = 0;
    int total;

    if(b < a) {
        int temp = b;
        b = a;
        a = temp;
    }

    while(total <= c) {

        total = a + b;
        a = b;
        b = total;
        count++;
        //cout << total << endl;     
    }
    cout << count << endl; 
}