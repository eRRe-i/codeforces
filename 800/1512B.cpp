#include "bits/stdc++.h"
// 1512B - Almost Rectangle
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
 ii a, b;
 bool has_a = false;
 char ch;

 forn(i, n) {
	forn(j, n) {
		cin >> ch;
		if (has_a && ch == '*') {
			b = ii(i, j);
		} else if(ch == '*') {
			a = ii(i,j);
			has_a = true;
		}
	}
 }

if(a.first == b.first) {
	b.first = (b.first + 1) % n;
}
if(a.second == b.second) {
	b.second = (b.second + 1) % n;
}
ii c = ii(a.first, b.second);
ii d = ii(b.first, a.second);
	
forn(i, n) {
	forn(j, n) {
		if (i == a.first && j == a.second) {
			cout << '*';
		} else if (i == b.first && j == b.second) {
			cout << '*';
		} else if (i == c.first && j == c.second) {
			cout << '*';
		} else if (i == d.first && j == d.second) {
			cout << '*';
		} else {
			cout << '.';
		}
	}
	cout << endl;
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