#include<iostream>

using namespace std;
int main() {

  int a;
  cin >> a;

  for(int i=0; i < a; i++) {

    int v;
    cin >> v;

    cout << int(v/10) + v%10 << endl;
  }

  return 0;
}