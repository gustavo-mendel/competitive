#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
// By: mende1

#define endl "\n"
#define int ll
#define cini(n) int n; cin >> n;
#define fori(x, n) for(int i=x; i<=n; i++)
#define forj(x, n) for(int j=x; j<=n; j++)
#define fork(x, n) for(int k=x; k<=n; k++)

void solve() {
	// -------------------------------------------

	int n, k;
	cin >> n >> k;

	vector<int> x(n);
	vector<int> y(n);

	for (int i=0; i<n; i++) {
		cin >> x[i] >> y[i];
	}

	sort(x.begin(), x.end());
	sort(y.begin(), y.end());

	cout << (x[n-1] - x[0] + 2 * k) * (y[n-1] - y[0] + 2 * k) << endl; 

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
}
