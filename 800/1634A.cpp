#include "bits/stdc++.h"
// 1634A - Reverse and Concatenate 
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
	int n, k; cin >> n >> k;
	string s; cin >> s;
	bool ispal = true;

	for(int i = 0, j = (int)s.length()-1; i < j; i++, j--) {
		if(s[i] != s[j]) ispal = false;
	}

	if(ispal || k==0 ) cout << 1 << endl;
	else cout << 2 << endl;


}

 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}