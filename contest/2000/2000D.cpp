#include "bits/stdc++.h"
// 2000 - Right Left Wrong 
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
	int n; cin >> n;

	vll v(n, 0);
	forn(i, n) cin >> v[i];

	vll prefix_sum(n, 0);

	forn(i, n) {
		if(i == 0) prefix_sum[i] = v[i];
		else prefix_sum[i] = v[i] + prefix_sum[i-1];
	}

	string s; cin >> s;

	vll ls;
	vll rs;

	if(n ==  1) {
		cout << 0 << endl;
		return;
	}

	forn(i, n) {
		if(s[i] == 'L') ls.push_back(i);
		else rs.push_back(i);
	}

	if(ls.size() == 0 || rs.size() == 0) {
		cout << 0 << ENDL;
		return;
	}
	int times = min(ls.size(), rs.size());
	int temp = times;
	forn(i, times){
		if(ls[i] > rs[rs.size()-i-1]) temp--;
	}
	times = temp;
	ll max = 0;
	int left, right;
	forn(i, times) {
		left = ls[i];
		right = rs[rs.size()-1-i];
		// cout << "LEFT -- RIGHT " << left << " "<< right << endl;
		if(ls[i] == 0) max += prefix_sum[right];
		else max += prefix_sum[right]-prefix_sum[left-1];
	}

	// int prefix_i = 0, prefix_j= 0; 
	// ll prefix = 0, count = 0;
	// int left, right;
	// for(int i = times-1; i >= 0; i--) {
	// 	count = 0;
	// 	left = ls[i];
	// 	right = rs[rs.size()-1-i];
	// 	// cout << left << " " << right << endl;
	// 	for(int j = left; j <= right; j++) {
	// 		if(!prefix) {
	// 			count += v[j];
	// 		} else {
	// 			if (j < prefix_i || j > prefix_j){
	// 				count += v[j];
	// 			} else continue;
	// 		}
	// 	}
	// 	prefix_i = left;
	// 	prefix_j = right;
	// 	prefix += count;
	// 	max += prefix;
	// 	// cout << count << endl;
	// }

	cout << max << endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}