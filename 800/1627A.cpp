#include "bits/stdc++.h"
// 1627A - Not Shading 
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
using matrix = vector<vector<char>>;

const string ENDL = "\n";

void solve() 
{
	int r, c, br, bc; cin >> r >> c >> br >> bc;
	matrix m(r, vector<char>(c));
	bool has_b = false;
	bool is_b = false;
	bool has_br = false, has_bc = false;
	forn(i, r) {
		forn(j, c) {
			cin >> m[i][j];
			if(m[i][j] == 'B') has_b = true;
			if(i == br-1 && j == bc-1 && m[i][j] == 'B') is_b = true;
			if(i == br-1 && m[i][j] == 'B') has_br = true;
			if(j == bc-1 && m[i][j] == 'B') has_bc = true; 
		}
	}
	if (!has_b) cout << -1 << endl;
	else if (is_b) cout << 0 << endl;
	else if(!has_br && !has_bc) cout << 2 << endl;
	else if(has_br || has_bc) cout << 1 << endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}