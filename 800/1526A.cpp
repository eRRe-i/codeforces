#include "bits/stdc++.h"
// 1526A - Mean Inequality 
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
	int n; cin >> n;

	vi v(2*n, 0);

	forn(i, 2*n) cin >> v[i];

	sort(v.begin(), v.end());

	for(int i = 0, j = v.size()-1; i < j; i++, j--) {
		cout << v[i] << " " << v[j] << " "; 
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