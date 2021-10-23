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

#define MAX 200000


void solve() {
	// -------------------------------------------

	int k;
	cin >> k;

	// vector<vector<int>> arr(k);
	vector<pair<int, pair<int, int>>> arr;

	for (int i=0; i<k; i++) {
		int n;
		cin >> n;

		vector<int> aux(n);

		int sum = 0;

		for (int j=0; j<n; j++) {
			int a;
			cin >> aux[j];
			sum += aux[j];
		}

		for (int j=0; j<n; j++) {
			arr.push_back(make_pair(sum - aux[j], make_pair(i, j)));
		}

	}

	stable_sort(arr.begin(), arr.end());

	for (int i=0; i<arr.size()-1; i++) {
		if (arr[i].first == arr[i+1].first && (arr[i].second.first != arr[i+1].second.first)) {
			cout << "YES" << endl;
			cout << arr[i].second.first + 1 << " " << arr[i].second.second + 1 << endl;
			cout << arr[i+1].second.first + 1 << " " << arr[i+1].second.second + 1 << endl;
			return;
		}
	}

	cout << "NO" << endl;

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
