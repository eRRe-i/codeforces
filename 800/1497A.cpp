#include "bits/stdc++.h"
// 1497A - Meximization 
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
	int n; cin >> n;

	vi v(n, 0);

	forn(i, n) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	vi result(n, -1);


	forn(i, n) {
		if(v[i] >= n) continue;
		if(result[v[i]] == -1) {
			result[v[i]] = v[i];
			v[i] = -1;
		}
	}
	forn(i, n) {
		if(result[i] != -1) continue;
		forn(j, n) {
			if(v[j] != -1 && result[i] == -1) {
				result[i] = v[j];
				v[j] = -1;
				break;
			}
		}
	}

	forn(i, n) {
		cout << result[i] << " ";
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