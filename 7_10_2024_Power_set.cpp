#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n ; cin >> n ;
    vector<int> nums(n);
    for(auto &i : nums) cin >> i ;
    int sz = 1<<n; // 2^n
    vector<vector<int>> v(sz);
    for(int i=0 ; i<sz ; i++){
        for(int j=0;j<n ; j++){
            if(i & (1<<j)) v[i].push_back(nums[j]); 
            /*  
                for n = 3 
                0 0 0 -> 0
                1 0 0 -> 1
                0 1 0 -> 2
                1 1 0 -> 3
                0 0 1 -> 4
                1 0 1 -> 5
                0 1 1 -> 6
                1 1 1 -> 7
            */
        }
    }

    for(int i=0;i<sz;i++){
        for(int j=0 ; j<v[i].size() ; j++){
            cout << v[i][j] << " ";
        }
        cout << nl ;
    }
    return 0;
}
