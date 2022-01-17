#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define f first
#define s second
#define arr(a,n) long long int *a = new long long int[n]
#define ll long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


ll gcd(ll x, ll y){if(y>x){return gcd(y,x);}if(y==0){return x;}return gcd(y,x%y);}
bool prime(ll x){for(ll i=2;i*i<=x;i++){if(x%i==0){return 0;}}return 1;}
ll fact(ll n){if(n==0){return 1;}return n*fact(n-1);}
bool powerOf2(ll n){if(n==0){return 0;} return (ceil(log2(n))== floor(log2(n)));}


void solve(){
  ll t; cin>>t;
  ll f=0;
  while(t--){
      ll co=0;
      ll a,b,c; cin>>a>>b>>c;
      if(a==1) co++;
      if(b==1) co++;
      if(c==1) co++;
      if(co>=2) f++;
  }
  cout<<f;

}


int32_t main(){
fast
ll t=1;
// cin>>t;
while(t--)
solve();
return 0;
}