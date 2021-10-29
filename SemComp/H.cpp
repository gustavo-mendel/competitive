//problem link
#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	int a;

	cin >> n;
	bool correct = true;

	for (int i = 1; i <= n; ++i){

		int x;

		cin >> x;
		if (i == 1){
			if (x != 1){
				correct = false;
			}
		}
		else{
			if(x != a+1){
				correct = false;
			}
		}
		a = x;
	}
	
	(correct)? cout << "Correto" << endl : cout << "Incorreto" << endl;
}

int main(){
	int t;

	cin >> t;

	while(t--){
		
		solve();
	}
}