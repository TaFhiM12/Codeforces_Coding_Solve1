#include <iostream>
#include <deque> 
#include <vector> 
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    vector<int> v ;
    for(int i=0;i<=n-k ; i++){
        int mx = 0 ;
        for(int j=i;j<k+i;j++){
            mx = max(mx,arr[j]);
        }
        v.push_back(mx);
    }
    for(int i=0;i<v.size();i++) cout << v[i] << " ";
    cout << endl;
    // for(int i=0;i<n;i++) cout << arr[i] <<  " ";
    // cout << endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}