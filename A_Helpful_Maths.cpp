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
  string s; cin>>s;
  int l=s.size(),c;
   for(int i=0;i<l;i+=2)
 {
     for(int j=i+2;j<l;j+=2){
        if(s[j]<s[i])
        {
            c=s[i];
            s[i]=s[j];
            s[j]=c;
        }
     }
 }
 cout<<s;
}


int32_t main(){
fast
ll t=1;
//cin>>t;
while(t--)
solve();
return 0;
}