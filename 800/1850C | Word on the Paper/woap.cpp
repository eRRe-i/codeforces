#include <iostream>
#include <algorithm>
void proc();
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){ proc(); }
    return 0;
}
void proc(){
   int n=8;
    string s = "";
    string t;
    for(int i=0; i<8; i++) {
        cin >> t;
        t.erase(remove(t.begin(), t.end(), '.'), t.end());
        s = s+t;
    }
    cout << s << endl;
    
}