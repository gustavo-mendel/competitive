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

	string str;
	cin >> str;

	int tam = str.size();

	if (tam > 10) {
		string ans = "";
		ans += str[0];
		ans += to_string(tam-2);
		ans += str[tam-1];

		cout << ans << endl;
	}
	else {
		cout << str << endl;
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
