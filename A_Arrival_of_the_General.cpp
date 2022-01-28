#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define f first
#define s second
#define ll long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


ll gcd(ll x, ll y){if(y>x){return gcd(y,x);}if(y==0){return x;}return gcd(y,x%y);}
bool prime(ll x){for(ll i=2;i*i<=x;i++){if(x%i==0){return 0;}}return 1;}
ll fact(ll n){if(n==0){return 1;}return n*fact(n-1);}
bool powerOf2(ll n){if(n==0){return 0;} return (ceil(log2(n))== floor(log2(n)));}


void solve(){
ll n;cin>>n;
vector<ll>v(n);
ll mx=INT_MIN,mn=INT_MAX,mxi=0,mni=0;
for(ll i=0;i<n;i++){
cin>>v[i];
if(mx<v[i]){
    mx=v[i];
    mxi=i;
}
if(mn>=v[i]){
    mn=v[i];
    mni=i;
}
}

if(mxi<mni){
    cout<<(mxi-0)+(n-1-mni)<<endl;
}
else{
    cout<<(mxi-0)+(n-1-mni)-1<<endl;
}


}


int32_t main(){
fast
ll t=1;
//cin>>t;
while(t--)
solve();
return 0;
}