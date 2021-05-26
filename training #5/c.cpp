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

bool is_prime(int n) {
	if (n == 1) return false;

	for (int i=2; i*i <= n; i++) {
		if (n % i == 0) return false;
	}

	return true;
}

vector<int> prime;

void precalc (int n) {

	int cnt = 2;
	while (cnt < n) {
		if (is_prime(cnt)) {
			prime.push_back(cnt);
		}
		cnt++;
	}
}

void solve() {
	// -------------------------------------------

	cini(n);
	precalc(n);
	
	int ans = 0;
	for (int i=1; i<=n; i++) {

		int cnt = 0;
		for (int j=0; j<prime.size(); j++) {
			if (i % prime[j] == 0) cnt++;
		}

		if (cnt == 2) ans++;
	}

	cout << ans << endl;

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
