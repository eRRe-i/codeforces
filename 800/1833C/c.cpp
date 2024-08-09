#include "bits/stdc++.h"

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
 int n;
 cin >> n;
 int odd_count = 0, even_count = 0;
 ll min_odd = 10e9 + 1;
 vll vec = vll(n, 0);


 forn(i , n) {
	cin >> vec[i];
	if(vec[i] %2 == 0) {
		even_count++;
	}
	else {
		odd_count++;
		if(vec[i] < min_odd) min_odd = vec[i];
	}

	
	}
	if(even_count == 0 || odd_count == 0) {
		cout << "YES" << endl;
		return;
	}
	else {
		forn(i, n) {
			if(vec[i] - min_odd < 0) {
				cout << "NO" << endl;
				return;
			}
		}
	}
	cout << "YES" << endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}