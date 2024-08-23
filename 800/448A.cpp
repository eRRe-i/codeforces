#include "bits/stdc++.h"
// 448A - Rewards 
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
	int cup1, cup2, cup3, medal1, medal2, medal3, shelves; cin >> cup1 >> cup2 >> cup3 >> medal1 >> medal2 >> medal3 >> shelves;
	int count  = 0;
	int cups = cup1 + cup2  + cup3;
	int medals = medal1 + medal2 + medal3;
	cups % 5 == 0 ? count += cups/5 : count +=cups/5 + 1;
	medals % 10 == 0 ? count += medals/10 : count += medals/10 + 1;
	if(count > shelves) cout << "NO" << ENDL;
	else cout << "YES" << ENDL;
}

 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}