#include "bits/stdc++.h"
// 1862B - Sequence Game 
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
	ull n;
	cin >> n;

	vll v(n, 0);

	for(ull i=0; i < n; i++) {
		cin >> v[i];
	}
	ull final_n = n;

	for(ull i=1; i < n; i++){
		if (v[i-1] > v[i]) {
			final_n++;
		}
		
	}
	cout << final_n << endl;
	cout << v[0] << " ";
	for(ull i=1; i < n; i++){
		if (v[i-1] > v[i]) {
			cout << 1 << " ";
		}
		cout << v[i] << " ";
	}
	cout << endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}