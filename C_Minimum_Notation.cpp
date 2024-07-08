#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    optimize();
    int t; cin>>t;
    while(t--){
        string str; cin >> str;
        int n = str.size();
        char mn = '9';

        for (int i = n-1; i>=0; i--){
            if(str[i]<mn) mn=min(str[i], mn);
            else if(str[i]>mn && str[i]!='9') str[i]=str[i]+'1'-'0';
        }

        sort(str.begin(), str.end());
        cout<<str<<endl;
    }
    return 0;
}