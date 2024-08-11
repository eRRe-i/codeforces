#include "bits/stdc++.h"
// 1846B - Rudolph and Tic-Tac-Toe
// RATING 800
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
	int board = 9;

	vector<char> vec(board, '.');	
	char ans = '.';

	forn(i, 9) {
		cin >> vec[i];
	}

	if(vec[0] == vec[4] && vec[4] == vec[8]) {
		if(vec[0] != '.')
		ans = vec[0];
	} 

	if(vec[2] == vec[4] && vec[4] == vec[6]) {
		if(vec[2] != '.')
		ans = vec[2];
	}

	forn(i, 3) {
		if(vec[i*3 + 0] == vec[i*3 + 1] && vec[i*3 + 1] == vec[i*3 + 2]) {
			if(vec[i*3 + 0] != '.')
			ans = vec[i*3 + 1];
		}
		if(vec[0*3 + i] == vec[1*3 + i] && vec[1*3 + i] == vec[2*3 + i]) {
			if(vec[0*3 + i] != '.')
			ans = vec[1*3 + i];
		}
	}

	if(ans == '.') {
		cout << "DRAW" << ENDL;
	} else {
		cout << ans << ENDL;
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