#include "bits/stdc++.h"
// 1712A - Wonderful Permutation 
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
int n, k; cin >> n >> k;
vi v(n, 0);
forn(i, n) cin >> v[i];


if(n == 1 || n == k) {
	cout << 0 << endl;
	return;
} 
int count = 0;
for(int i=0; i<k; i++) {
	if(v[i] > k) count++;
}

cout << count << endl;

}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}