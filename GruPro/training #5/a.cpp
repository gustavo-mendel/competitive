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

void precal () {
	
}

void solve() {
	// -------------------------------------------

	cini(n);

	if (n == 1) {
		cout << "1 is not a prime" << endl;
		return;
	}
	else {

		for (int i=2; i*i < n; i++) {
			if (n % i == 0) {
				cout << n << " is not a prime" << endl;
				return;
			}
		}
		cout << n << " is a prime" << endl;
	}

	// -------------------------------------------
}

int32_t main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	precal();
	cini(t);
	// int t=1;

	while(t--) {
		solve();
	}
}
