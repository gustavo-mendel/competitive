#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
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

	int max = 100001;

	int n;
	cin >> n;

	int aux[max] = { 0 };

	for (int i=0; i<n; i++) {
		int a;
		cin >> a;
		aux[a] += 1;
	}

	int ans = 0;
	int ult = 0;
	for (int i=0; i<max; i++) {
		if (aux[i]) {
			if (ult) {

				aux[ult + i] += 1;

				ans += ult + i;
				aux[i] -= 1;

				ult = 0;
			}
			while (aux[i] > 1) {
				int sum = i + i;
				aux[sum] += 1;

				ans += sum;
				aux[i] -= 2;
			}
			if (aux[i]) {
				ult = i;
			}
			else {
				ult = 0;
			}
		}
	}

	cout << ans << endl;

	// -------------------------------------------
}

int32_t main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cini(t);
	// int t=1;

	while(t--) {
		solve();
	}
}
