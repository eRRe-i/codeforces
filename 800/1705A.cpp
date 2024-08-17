#include "bits/stdc++.h"
// 1705A - Mark the Photographer 
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
	int n, k; cin >> n >> k;

	vi v(n*2, 0);

	forn(i, n*2) cin >> v[i];

	sort(v.begin(), v.end());

	forn(i, n) {
		if(v[i+n] - v[i] < k) {
			cout << "NO" << ENDL;
			return;;
		}
	}

	cout << "YES" << ENDL;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}