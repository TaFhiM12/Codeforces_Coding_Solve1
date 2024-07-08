#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

bool checkifMatch(vector<int> &tmp, vector<int> &final){
    for(int i = 0; i<20; i++){
        if(final[i]==1 and tmp[i]==0) return false;
    }
    return true;
}

void solve()
{
    int n;
    cin>>n;
    vector<vector<int>> pref(n+1,vector<int>(20,0));
    for(int i = 1; i<=n; i++){
        int x;
        cin>>x;
        int j = 0;
        while(j<20){
            if((1<<j)&x) pref[i][j]++;
            pref[i][j]+=pref[i-1][j];
            j++;
        }
    }
    vector<int> final(20);
    for(int i = 0; i<20; i++){
        if(pref[n][i]>0) final[i] = 1;
    }
    int i = 0, j = 1;
    while(j<=n and !(checkifMatch(pref[j],final))) j++;
    if(j==n+1){
        cout<<n<<endl;
        return;
    }
    j++;i++;
    vector<int> tmp(30);
    while(j<=n){
        for(int k = 0; k<20; k++){
            tmp[k] = pref[j][k] - pref[i][k];
        }
        if(!checkifMatch(tmp,final)) i--;
        i++;
        j++;
    }
    cout<<j-i<<endl;
}

int32_t main()
{
    optimize();
    int t; cin >> t ;
    while(t--){
        solve();
    }
    return 0;
}