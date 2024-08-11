#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;
using vll = vector<ll>;

const string ENDL = "\n";

void solve()
{
	ll a, b;
	string v;
	cin >> a, b, v;

  ll l = 0, r = 0, u = 0, d = 0; 
	for(int i = 0; i < string.length; i++) {
		switch(string[i]) {
			case 'L': l++; break;
			case 'R': r++; break;
			case 'U': u++; break;
			case 'D': d++; break;
		}
	}
	
	if((a > 0 && r > a) || (a < 0 && l > -a) || a == 0) {
		if((b > 0 && u > b) || (b < 0 && d > -b) || b == 0) {
			cout << 'YES' << endl;
			return;
		}
	}
	cout << 'NO' << endl;
	return;

}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}