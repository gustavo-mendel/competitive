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

	cini(n);
	char task[n];
	
	fori(0, n-1) {
		cin >> task[i];
	}
	
	bool ok = true;
	
	for (int i=0; i<n; i++) {
		if (i) {
			
			int k = i;
			while (task[k] == task[k-1] && task[k-1]) {
				k--;
			}
			
			for (int j=k-1; j>=0; j--) {
				if (task[j] == task[k]) {
					ok = false;
					break;
				}
			}
		}
	}
	
	if (ok) cout << "YES" << endl;
	else 	cout << "NO"  << endl;
	

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
