#include "bits/stdc++.h"
// 1657A - Integer Moves 
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
	int x, y; cin >> x >> y;

	if(x == 0 && y == 0) cout << 0 << endl;
	else {
		if (sqrt(x*x + y*y) - (int)sqrt(x*x+y*y) > 0) cout << 2 << endl;
		else cout << 1 << endl;
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