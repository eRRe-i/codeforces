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
	int n, m;

	cin >> n;

	vll v(n, LONG_LONG_MAX);
	forn(i, n) cin >> v[i];

	cin >> m;
	string s;
	char input;
	ll temp;
	bool error;

	forn(i, m) {

		cin >> s;

		if(s.size() != v.size()) {
			cout << "NO" << ENDL;
			continue;
		}

		if(s.size() == 1) {
			cout << "YES" << ENDL;
			continue;
		}

		error = false;
		forn(j, n) {
			if (s[j] == '0') continue;
			else {
				input = s[j];
				temp = v[j];
				s[j] = '0';
			}
			for (int k = j+1; k < n; k++) {
				if(s[k] != '0') {
					if(v[k] == temp && s[k] == input) {
						s[k] = '0';
					} else if((v[k] == temp && s[k] != input) || (s[k] == input && v[k] != temp)) {
						error = true;
						break;
					}
				}
			}
			if(error) break;
		}
		if(error) {
			cout << "NO" << ENDL;
		} else {
			cout << "YES" << ENDL;
		}
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