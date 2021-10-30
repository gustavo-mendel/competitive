#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
using ld = long double;
// By: mende1

#define endl "\n"
#define int ll
#define cini(n) int n; cin >> n;

bool comp (int i, int j) {
	return i > j;
}

void solve() {
	// -------------------------------------------

	int n, k;
	cin >> n >> k;

	vector<pair<int, int>> a;
	vector<vector<int>> b(k+1);
	vector<int> ans;

	for (int i=0; i<n; i++) {
		int num, c;

		cin >> num >> c;
		a.push_back(make_pair(num, c));
		b[c].push_back(num);
	}

	for (int i=1; i<=k; i++) {
		sort(b[i].begin(), b[i].end(), comp);
	}

	for (int i=0; i<n; i++) {
		ans.push_back(b[a[i].second].back());
		b[a[i].second].pop_back();
	}

	for (int i=0; i<n-1; i++) {
		if (ans[i] > ans[i+1]) {
			cout << "N" << endl;
			return;
		}
	}

	cout << "Y" << endl;

	// -------------------------------------------
}

int32_t main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// cini(t);
	int t=1;

	while(t--) {
		solve();
	}

	return 0;
}
