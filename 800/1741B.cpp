#include "bits/stdc++.h"
// 1741B - Funny Permutation 
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
int n; cin >> n;

if(n == 1) {
	cout << 1 << endl; return;
}
if(n == 2) {
	cout << 2 << " " << 1 << endl; return;
}
if(n == 3) {
	cout << -1 << endl; return;
}
for(int i=0; i < n/2; i++) {
	cout << n-i << " ";
}
for(int i=0; i < n - n/2; i++) {
	cout << i+1 << " ";
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