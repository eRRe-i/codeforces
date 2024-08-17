#include "bits/stdc++.h"
// 1514A - Perfectly Imperfect Array 
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

const string ENDL = "\n";

void solve() 
{
	int n; cin >> n;

	vd v(n,0);
	bool flag = false;
	int root;

	forn(i, n) {
		cin >> v[i];
		root = round(sqrt(v[i]));
		if (root * root !=  v[i]) flag = true; 
	}

	if (flag) cout << "YES" << ENDL;
	else cout << "NO" << ENDL;

	
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}