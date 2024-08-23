#include "bits/stdc++.h"
// 1398B - Substring Removal Game 
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
	string s; cin >> s;
	int ones = 0;
	int max, count, index = 0;
	int is_alice = true;
	int alice_count = 0;

	forn(i, (int)s.length()) if(s[i] == '1') ones++;

	while(ones != 0) {

		max = 0;
		count = 0;
		forn(i, (int)s.length()) {
			if(s[i] == '1') {
				count++; 
				if(count > max) {
					max = count;
					index = i;
				}
			} else if (s[i] == '0') count = 0;
		}

		if(is_alice) alice_count += max;

		// cout << index << " "<< max<< endl;
		for(int i= index-max+1; i <= index; i++) {
			s[i] = '_';
		}
		// cout << s << endl;
		is_alice = !is_alice;
		ones -= max;
	}
	
	cout << alice_count << endl;
}

 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}