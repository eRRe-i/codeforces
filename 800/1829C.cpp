#include "bits/stdc++.h"
//  1829C - Mr. Perfectly Fine 
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

	int minfor01 = 1e6, minfor10 = 1e6, minfor11 = 1e6;

	int minimal;
	string s;

	forn(i, n) {
		cin >> minimal >> s;

		if( s == "01" && minfor01 > minimal) {
			minfor01 = minimal;
		} else if (s == "10" && minfor10 > minimal) {
			minfor10 = minimal;
		} else if (s == "11" && minfor11 > minimal) {
			minfor11 = minimal;
		}
	}


	if(minfor01 + minfor10 >= 1e6 &&  minfor11 >= 1e6 ) {
		cout << -1 << endl;
	} else if(minfor01 + minfor10 >= 1e6) {
		cout << minfor11 << endl;
	} else{
		cout << min(minfor01 + minfor10, minfor11) << endl;
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