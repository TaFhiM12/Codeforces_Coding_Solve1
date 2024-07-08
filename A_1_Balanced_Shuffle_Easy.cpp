#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

bool cpm(pair<int,int>&a , pair<int,int>&b){
    if(a.first != b.first)return a.first < b.first;
    return a.second > b.second;
}

int32_t main()
{
    optimize();
    string s;
    cin>>s;
 
    int n = s.size();
    vector<int>v;
    v.push_back(0);
 
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '('){
            cnt++;
        }else{
            cnt--;
        }
        v.push_back(cnt);
    }
    v.pop_back();
    vector<pair<int,int>> tem;
    for(int i=0;i<n;i++){
        tem.push_back({v[i] , i+1});
    }
    sort(tem.begin(),tem.end(), cpm);
    for(auto i: tem) cout<<s[i.second-1];
    cout<<endl; 
    return 0;
}