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
    map<int,int>mp;
    vector<int> v1,v2,v3;
    for(int i=1 ; i<=n ; i++){
        int a ; cin >> a ;
        if(a==1) v1.push_back(i);
        else if(a==2) v2.push_back(i);
        else v3.push_back(i);
        mp[a]++;
    }
    int temp = min(mp[1],min(mp[2],mp[3]));
    if(temp > 0){
        cout << temp << nl ;
        for(int i=0 ; i<temp ; i++){
            cout << v1[i] << " " << v2[i] << " "<<v3[i] << nl ;
        }
    }
    else cout << temp << nl ;
    return 0;
}