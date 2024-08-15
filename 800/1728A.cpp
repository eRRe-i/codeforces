#include "bits/stdc++.h"
// 1728A - Colored Balls: Revisited
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
	int n; cin >> n;
	vi v(n, 0);
	forn(i, n) {
		cin >> v[i];
	}

	if(n == 1) {
		cout << 1 << endl;
		return;
	}

	int max = v[0];
	int i_max = 0;

	forn(i, n) {
		if(v[i] > max) {
			max = v[i];
			i_max = i;
		}
	}

	cout << i_max+1 << endl;
	
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}