#include<bits/stdc++.h>
using namespace std ;

void solve(int n , string str ){
    map<int,int> mp ;
    for(int i=0;i<26;i++){
        mp[i] = -1;
    }
    for(int i=0 ; i<n ; i++){
        int ch = str[i] - 'a' ;
        if(mp[ch] == -1) mp[ch] = i%2 ;
        else if(mp[ch] != i%2){
            cout << "NO" << endl ;
            return;
        }
    }
    cout << "YES" << endl ;
}

int32_t main()
{
    int tc ; cin >> tc ;
    while(tc--){
        int n ; 
        string str ;
        cin >> n >> str ;
        solve(n,str);
    }
    return 0;
}