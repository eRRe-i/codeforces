#include "bits/stdc++.h"
// 1856A - Tales of a Sort 
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
	vi vec = vi(n, 0);

	forn(i,n){
		cin >> vec[i];
	}

	int i_sorted = -1;
	bool is_sorted = true;

	for(int i=n-1; i > 0; i--) {
		if(vec[i] >= vec[i-1]) {
			i_sorted = i;
		} else {
			is_sorted=false;
			break;
		}
	}

	auto output = max_element(vec.begin(), vec.end());
	
	if(is_sorted) {
		cout << 0 << endl;
		return;
	} else if(!is_sorted && i_sorted == -1) {
		output = max_element(vec.begin(), vec.end());
	} else {
		output = max_element(vec.begin(), vec.begin() + i_sorted);
	}

	cout << *output << endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}