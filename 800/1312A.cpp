#include "bits/stdc++.h"
// 1312A - Two Regular Polygons 
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
	int m, n;

	cin >> m >> n;

	if(m%n == 0) {
		cout << "YES" << ENDL;
	} else {
		cout << "NO" << ENDL;

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