#include "bits/stdc++.h"
// 1999B - Card Game 
// RATING - 
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
	int a, b, c, d;

	cin >> a >> b >> c >> d;

	int sum = 0;

	int saneet, a_first, a_second, b_first, b_second;

	for (int i=0; i<4; i++) {

		saneet = 0;

		if (i==0) {
			a_first = a; a_second = b; b_first = c; b_second = d;
		} else if(i==1) {
			a_first = a; a_second = b; b_first = d; b_second = c;
		}else if(i==2) {
			a_first = b; a_second = a; b_first = c; b_second = d;
		}else if(i==3) {
			a_first = b; a_second = a; b_first = d; b_second = c;
		}

		if (a_first > b_first) {
			saneet++;
		} else if(a_first < b_first) {
			saneet--;
		}

		if (a_second > b_second) {
			saneet++;
		} else if(a_second < b_second) {
			saneet--;
		}


		if(saneet > 0 ) sum++;
	}

	cout << sum << endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}