#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
const int M = 1e7 + 1;
vector<int> searcingNumber;
int mp[M];
void solve(){
    int n ; cin >> n ;
    int p = lower_bound(searcingNumber.begin() , searcingNumber.end() , n ) - searcingNumber.begin();
    if(p == searcingNumber.size()){
        cout << p << nl ;
    }
    else if(n == searcingNumber[p]) {
        cout << p << '\n';
    } else {
        cout << p - 1 << '\n';
    }
}
int32_t main()
{
    searcingNumber.push_back(0);
    for (int i = 0; i <= 3162; i++)
    {
        for (int j = 0; j <= 3162; j++)
        {
            int value = i * i + j * j;
            if (value < M)
            {
                if (mp[value] == 0)
                {
                    mp[value] = 1;
                    searcingNumber.push_back(value);
                }
            }
            if(value >= M) break;
        }
    }
    sort(searcingNumber.begin(),searcingNumber.end());
    for (int i = 0; i <= 5; i++) {
        cerr << searcingNumber[i] << " ";
    }
    int t ; cin >> t ;
    while(t--){
        solve();
    }
    return 0;
}