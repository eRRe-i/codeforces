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
	int a;
	cin >> a;
	vll vec(a, 0);

	cin >> vec[0];
	ll diff = 1e9 + 1;
	bool sorted = true;

	for(int i=1; i<a; i++) {
		cin >> vec[i];

			if(vec[i-1] > vec[i]) {
				sorted = false;
			} else {
				diff = min(vec[i]-vec[i-1], diff);
			}
			
	}

	if(sorted) {
		cout << (diff/2) + 1 << endl;
	} else {
		cout << 0 << endl;
	}
	
	return;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}