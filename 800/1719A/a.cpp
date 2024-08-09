#include "bits/stdc++.h"

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
	int a, b;

	cin >> a >> b;
	
	if (a == 1 && b == 1) {
		cout << "Tonya" << endl;
	}
	else if (a == 1 || b == 1) {
		if (max(a, b) % 2 == 0) {
			cout << "Burenka" << endl;
		} else {
			cout << "Tonya" << endl;
		}
	} else {
		if ((a + b) % 2 == 0) {
			cout << "Tonya" << endl;
		} else {
			cout << "Burenka" << endl;
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