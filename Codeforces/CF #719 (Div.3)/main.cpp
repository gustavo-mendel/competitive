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
	
	stringstream ss;
	
	int ans = 0;
	int k = 1;
	
	if (n < 10) {
		cout << n << endl;
		return;
	}
	
	for (int i=1; i*10<=n; i*=10) {
		ans += 9;
		k *= 10;
	}
	
	for (int i=k; i<n; i++) {
		ss << i;
		string aux;
		ss >> aux;
		
		bool ok = true;
		
		if ((int)count(aux.begin(), aux.end(), aux.at(0)) != (int)aux.size()) {
			ok = false;
		}
		
		if (ok) ans++;
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
