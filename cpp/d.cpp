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

	int n;
	while (cin >> n && n) {

		vector<int> arr(n+1, 1);

		arr[0] = 0;
		arr[1] = 0;
		
		for (int i=2; i*i<=n; i++) {
			if (arr[i]) {
				for (int j=i*i; j*j<=n; j+=i) {
					arr[j] = 0;
				}
			}
		}

		for (int i=0; i*i<n; i++) {
			if (arr[i]) {
				if (i * i > n) {
					break;
				}

				int cnt = 0;
				while (n % i == 0) {
					n /= i;
					cnt++;
				}

				if (cnt) {
					cout << i << "^" << cnt << " ";
				}
			}
		}

		cout << endl;
	}

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
