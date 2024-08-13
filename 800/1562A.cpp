#include "bits/stdc++.h"
// 1562A - The Miracle and the Sleeper 
// RATING - 800
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
	int l, r; cin >> l >> r;

	if(l == r) cout << 0 << endl;
	else if( l <= r/2) {
		if(r%2 == 0) {
			cout << r/2 -1 << endl;
		} else {
			cout << (r+1)/2 -1 << endl;
		}
	}
	else {
		cout << r%l << endl;
	}
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}