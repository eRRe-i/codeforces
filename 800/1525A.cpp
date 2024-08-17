#include "bits/stdc++.h"
// 1525A - Potion-making 
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

	double essence = 1;
	double water = 0;
	forn(i, 99) {
		if(essence*100/(essence+water) > n) water = water+1;
		else if(essence*100/(essence+water) < n) essence = essence+1;
		else if(essence*100/(essence+water) == n) {
			cout << i+1 << endl;
			return;
		}
	
	}
	cout << 100 << endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}