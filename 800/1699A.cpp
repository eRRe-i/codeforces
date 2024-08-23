#include "bits/stdc++.h"
// 1699A - The Third Three Number Problem 
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
	ull n; cin >> n;

	if(n%2 == 0) {
		cout << n/2 << " " << 0 << " " << n/2 << endl;
	}else {
		cout << -1 << endl;
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