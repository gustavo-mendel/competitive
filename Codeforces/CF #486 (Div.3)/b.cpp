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

bool compare (string i, string j) {
	return (i.size() < j.size());
}

void solve() {
	// -------------------------------------------

	int n;
	cin >> n;

	vector<string> arr(n);

	fori (0, n-1) {
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end(), compare);

	for (int i=0; i<n-1; i++) {
		if (arr[i+1].find(arr[i]) == string::npos) {
			cout << "NO" << endl;
			return;
		}
	}

	cout << "YES" << endl;

	for (vector<string>::iterator it=arr.begin(); it != arr.end(); ++it) {
		cout << *it << endl;
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
