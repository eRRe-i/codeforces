#include "bits/stdc++.h"
// 
// RATING - 
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
	int count = 0, max = 0;

	if(n == 1) {
		cout << 1 << endl;
		return;
	}
	for(int i = 0; i< n-1; i++) {
		if(v[i] == v[i+1]) count++;
		else count = 0;
		if(count > max) max  = count;
	}
	cout << max + 1 << endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}