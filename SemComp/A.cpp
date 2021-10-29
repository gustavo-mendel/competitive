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

	int n, m, l, c;
	cin >> n >> m >> l >> c;

	int  m1[n][m];
	int  m2[l][c];
	int ans[n][c];

	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			m1[i][j] = 0;
		}
	}

	for (int i=0; i<l; i++) {
		for (int j=0; j<c; j++) {
			m2[i][j] = 0;
		}
	}

	for (int i=0; i<n; i++) {
		for (int j=0; j<c; j++) {
			ans[i][j] = 0;
		}
	}

	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cin >> m1[i][j];
		}
	}

	for (int i=0; i<l; i++) {
		for (int j=0; j<c; j++) {
			cin >> m2[i][j];
		}
	}

	for (int i=0; i<n; i++) {
		for (int j=0; j<c; j++) {
			for (int k=0; k<m; k++) {
				ans[i][j] += m1[i][k] * m2[k][j];
			}
		}
	}

	int i, j;
	for (i=0; i < n; i++) {
		for (j=0; j < c-1; j++)
			cout << ans[ i ][ j ] << " ";
		cout << ans[ i ][ j ] << endl;
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
