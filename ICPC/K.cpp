//problem link
#include <bits/stdc++.h>

using namespace std;

int main(){
        ios_base::sync_with_stdio(0);
        vector <int> time;
        time.push_back(0);

        int t, d, m ;

        cin >> t >> d >> m;

        if (m == 0){
                (d>=t)? cout << "Y" : cout << "N";
        }
        else{
                int ant = 0;
                for (int i = 0; i < m; ++i){
                        int x;

                        cin >> x;

                        time.push_back(x - ant);

                        ant = x;
                }
                time.push_back(d-ant);

                for (int i : time){
                        if (i>=t){
                                cout << "Y";
                                return 0;
                        }
                }
                cout << "N";
                return 0;
        }


        return 0;
}
