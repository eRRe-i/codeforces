#include "bits/stdc++.h"
//
// RATING - 800
using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vd = vector<double>;
using vii = vector<ii>;
using vll = vector<ll>;
using matrix = vector<vector<int>>;

const string ENDL = "\n";

void solve() 
{
	int n; cin >> n;
	vi v(n, 0);
	forn(i, n) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int count = 0;
	forn(i, n) {
		if(v[i] > v[0]) count++;
	}
	cout << count << endl;
}

 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}