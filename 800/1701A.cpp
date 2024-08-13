#include "bits/stdc++.h"
// 1701A - Grass Field 
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
int num, count = 0;

forn(i, 4) {
	cin >> num;

	if(num) count++;
}

if (count == 0) cout << 0;
else if (count == 4) cout << 2;
else cout << 1;
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