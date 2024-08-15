#include "bits/stdc++.h"
// 2000 - Seating in a Bus 
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
	int n; cin >> n;

	vi v(n, 0);
	vi check(n, 0);

	forn(i, n) cin >> v[i];

	if(n < 3) {
		cout << "YES" << ENDL;
		return;
	}
	else {
		check[v[0]-1] = 1; 
		for(int i = 1; i < n; i++) {
			if (v[i] == 1) {
				if(check[1]) {
					check[0] = 1;
				} else {
					cout << "NO" << ENDL;
					return;
				}
			} else if (v[i] == n) {
				if(check[n-2]) {
					check[n-1] = 1;
				} else {
					cout << "NO" << ENDL;
					return;
				}
			} else {
				if (check[v[i]-2] || check[v[i]]) {
					check[v[i]-1] =  1;
				} else {
					cout << "NO" << ENDL;
					return;
				}
			}
		}
	}
	cout << "YES" << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}