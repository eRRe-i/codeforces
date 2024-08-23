#include "bits/stdc++.h"
// 1747A - Two Groups 
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

	ll value;
	ll sum = 0;

	forn(i, n) {
		cin  >> value;
		value > 0 ? sum += value : sum -= -value; 
	}
	cout << abs(sum) << endl;
}

 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}