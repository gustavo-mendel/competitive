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

void precal (int n) {

	int cnt = 2;
	while (cnt <= n) {
		if (is_prime(cnt)) {
			prime.push_back(cnt);
		}
		cnt++;
	}
}

void solve() {
	// -------------------------------------------

	cini(n);
	precal(n);
	cini(k);

	// fori(0, prime.size()-1) {
	// 	cout << prime[i] << " ";
	// } cout << endl;

	int cnt = 0;
	for (int i=1; i<prime.size(); i++) {
		for (int j=1; j<=i; j++) {
			if ((prime[j] + prime[j-1] + 1) == prime[i]) {
				// cout << (prime[j] + prime[j-1] + 1) << endl;
				cnt++;
				break;
			}
		}
	}

	// cout << "cnt = " << cnt << endl;
	if (cnt >= k) cout << "YES" << endl;
	else cout << "NO" << endl;
	

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
