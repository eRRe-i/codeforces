#include "bits/stdc++.h"
// 1391A - Suborrays 
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

	if(n == 1) {
		cout << 1 << endl;
		return;
	}

	cout << n << " " << 1 << " ";
	for(int i = 2; i< n; i++) {
		cout << i << " ";
	}
	cout << endl;
}
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}