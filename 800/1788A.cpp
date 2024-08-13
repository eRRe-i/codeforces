#include "bits/stdc++.h"
// 1788A - One and Two 
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

	vi v = vi(n, 0);
	int count_two = 0;

	forn(i,n) {
		cin >> v[i];
		if(v[i] == 2) count_two++;
	}


	int output= 0;
	if(count_two == 0) {
		cout << 1 << endl;
	} else if (count_two %2 !=0 ) {
		cout<< -1 << endl;
	} else {
		int ind = count_two/2;
		int count = 0;
		forn(i, n) {
			if(v[i] == 2) {
				count++;
				if (count == ind) {
					output = i+1;
					break;
				}
			}
		}
		cout << output << endl;
	}
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}