#include "bits/stdc++.h"
// 1183A - Nearest Interesting Number 
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
using matrix = vector<vector<char>>;

const string ENDL = "\n";

void solve() 
{
	int a; cin >> a;
	int temp, sum;

	while(true)	{
		temp = a;
		sum = 0;

		while(temp != 0) {
			sum += temp % 10;
			temp = temp/10;
		}
		

		if(sum % 4 == 0) break;
		else a++;
	}

	cout << a << endl;
}

 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}