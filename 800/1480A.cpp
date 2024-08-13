#include "bits/stdc++.h"
// 1480A - Yet Another String Game 
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
	string s; cin >> s;
	bool turn = false;

	forn(i, (int)s.size()) {
		if(!turn) {
			if(s[i]=='a') {
				s[i] = 'b';
				turn = !turn;
			} else {
				s[i] =  'a';
				turn = !turn;
			}
		} else {
			if(s[i]=='z') {
				s[i] = 'y';
				turn = !turn;
			} else {
				s[i] =  'z';
				turn = !turn;
			}
		}
	}
	cout << s << endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}