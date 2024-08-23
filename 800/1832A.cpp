#include "bits/stdc++.h"
// 1832A - New Palindrome 
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
	vi v(26, 0);
	string s; cin >> s;

	forn(i, (int)s.length()) {
		v['z'- s[i]]++;
	}
	forn(i, 26) {
		v['z'- s[i]];
	}

	int evencount = 0;
	bool has_one = false;
	forn(i, 26) {
		if(v[i]!= 0 && v[i] % 2 == 0) evencount++;
		else if(v[i] == 1) has_one = true;
	}

	if(s.length()%2 == 0) {
		if(evencount > 1) cout << "YES" << ENDL;
		else cout << "NO" << ENDL;
	} else {
		if(has_one && evencount > 1) cout << "YES" << ENDL;
		else if(!has_one && evencount >= 1 && s.length() >= 5) cout << "YES" << ENDL;
		else cout << "NO" << ENDL;
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