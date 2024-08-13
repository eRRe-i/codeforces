#include "bits/stdc++.h"
// 1569A - Balanced Substring 
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

	string s; cin >> s;

	if (n == 1) {
		cout << -1 << " " << -1 << endl;
		return;
	} else {
		for(int i=0; i< n-1; i++) {
			if(s[i] != s[i+1]) {
				cout << i+1 << " " << i+1+1 << endl;
				return;
			}
		}
	}
	cout << -1 << " " << -1 << endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}