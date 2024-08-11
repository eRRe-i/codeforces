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
    int best = 0;
    int bestq = 0;
    int a, b;

    for (int i=0; i< n; i++) {
        cin >> a >> b;
        if(a <= 10 && b > bestq){
            best = i+1;
            bestq = b;
    }
    }
    cout << best << endl;
}