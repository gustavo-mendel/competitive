//problem link
#include <bits/stdc++.h>

using namespace std;

#define int long long int

void solve(){
	int l,r,k;

	cin >> l >> r >> k;

	int i;

	if (l%k == 0 and l!=0){
		i = l;
	}
	else{
		i = l + (k  - l%k);
	}

	int f = k*(r/k);

	if(i>r){
		cout <<"0"<< endl;
	}
	else if (i == f){
		cout << "1" << endl;
	}
	else{
		cout << ((f-i)/k) + 1 << endl;
	}
}

int32_t main() {

	int t;

	cin >> t;

	while(t--){
		solve();
	}
	return 0;
}