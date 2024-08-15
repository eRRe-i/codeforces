#include "bits/stdc++.h"
// 2000A -  Primary Task
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
	string n; cin >> n;

	if(n[0] == '1' && n[1] == '0') {
		if(n[2] == '0' || (n[2] == '1' && n.size() <= 3)) {
			cout << "NO" << ENDL;
		} else cout << "YES" << ENDL;
	}
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