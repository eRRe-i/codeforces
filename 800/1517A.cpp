#include "bits/stdc++.h"
// 1517A - Sum of 2050 
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
	ull n; cin >> n;
	ull sum = 0;


	if(n%2050 != 0) {
		cout << -1 << endl;
	} else {
		n = n/2050;
		while(n != 0) {
			sum += n%10;
			n = n/10;
		}
		cout << sum << endl;
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