// Author : Ankit Tyagi
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define fri(i,a,b) for(int i=a;i<b;i++)
#define frd(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define pp pop_back
#define all(x) (x).begin(), (x).end()
#define dec greater<int>
#define endl "\n"
 
 
 
void solve(){
    
    int n; cin>>n;
    vector<int> v(2*n);

    int oc=0,ec=0;

    fri(i,0,2*n){
        cin>>v[i];
        if(v[i]&1) oc++;
        else ec++;
    }

    cout << ( oc==ec ? "Yes" : "No")<<endl;

}
     

 
int main(){
	fast;
	int t;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}