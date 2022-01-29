#include <bits/stdc++.h>
using namespace std;
#define MAX 2147483648
#define MIN -2147483647
#define mod 1000000007
#define f first
#define s second
#define min3(a, b, c) min(c, min(a, b))
#define max3(a,b,c) max(c, max(a,b))
#define arr(a,n) long long int *a = new long long int[n]
#define ll long long int
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


ll gcd(ll x, ll y){if(y>x){return gcd(y,x);}if(y==0){return x;}return gcd(y,x%y);}
bool prime(ll x){for(ll i=2;i*i<=x;i++){if(x%i==0){return 0;}}return 1;}
ll fact(ll n){if(n==0){return 1;}return n*fact(n-1);}
bool powerOf2(ll n){if(n==0){return 0;} return (ceil(log2(n))== floor(log2(n)));}


void solve(){
ll n,m;cin>>n>>m;
ll y=0;
while(n<=m){
    n*=3;
    m*=2;
    y++;
}
cout<<y<<endl;
}


int32_t main(){
fast
ll t=1;
//cin>>t;
while(t--)
solve();
return 0;
}