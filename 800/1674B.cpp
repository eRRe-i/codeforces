#include "bits/stdc++.h"
//  1674B - Dictionary 
//  RATING - 800
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
 string s;
 cin >> s;
 int count = 0;

 for(char i = 'a'; i < s[0]; i++) {
	 count += 25;
 }

 count += s[1] - 'a' ;

 if(s[1] < s[0]) {
	count++;
 }
 
 cout << count << endl;


}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}