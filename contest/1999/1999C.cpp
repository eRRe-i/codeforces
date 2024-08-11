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
	ll intervals, shower, minutes;

	cin >> intervals >> shower >> minutes;

	vll vec = vll(intervals*2, 0);

	for (ll i=0; i< intervals *2; i= i+2) {
		cin >> vec[i] >> vec[i+1];
	}

	if(vec.front() >= shower || minutes - vec.back() >= shower) {
		cout << "YES" <<  ENDL;
		return;
	}

	if(intervals > 1) {
		for (ll i = 2; i< intervals*2; i= i+2) {
			if( vec[i] - vec[i-1] >= shower) {
				cout << "YES" << ENDL;
				return;
			}
		}
	}

	cout << "NO" << ENDL;

}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}