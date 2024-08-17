#include "bits/stdc++.h"
// 1690B - Array Decrements
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
	ll n; cin >> n;

	vi v1(n, 0);
	vi v2(n, 0);


	forn(i, n) cin >> v1[i];
	forn(i, n) cin >> v2[i];

	if(n == 1) {
		 if(v1[0] >= v2[0]) {
			cout << "YES" << endl;
		 } else {
			cout << "NO" << ENDL;
		 }
		 return;
	}

	ll max = 0;
	forn(i, n) {
		if(v2[i] > v1[i]) {
			cout << "NO" << endl;
			return;
		}
		else if (v1[i] - v2[i] > max) max = v1[i] - v2[i];
	}

	// cout << max << endl;
	forn(i, n) {
		if(v1[i] - max != v2[i] && v2[i] != 0) {
			cout << "NO" << ENDL;
			return;
		}
	}

	cout << "YES" << endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}