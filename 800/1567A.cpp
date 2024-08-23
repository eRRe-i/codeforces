#include "bits/stdc++.h"
// 1657A - Integer Moves 
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
using matrix = vector<vector<int>>;

const string ENDL = "\n";

void solve() 
{
	int n; cin >> n;

	string s; cin >> s;

	forn(i, n) {
		switch(s[i]){
			case 'L': cout << 'L'; break;
			case 'R': cout << 'R'; break;
			case 'U': cout << 'D'; break;
			case 'D': cout << 'U'; break;
		}
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