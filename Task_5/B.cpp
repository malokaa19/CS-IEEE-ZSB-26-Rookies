#include <bits/stdc++.h>
using namespace std;
#define FAST std::ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }
#define int long long
#define vi vector<int>
#define endl "\n"

int32_t main (){
FAST
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a=-1,b=-1,c=-1;

for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
        a=i;
        n=n/a;
        break;
    }
}
if(a==-1){
    cout<<"NO\n";
    continue;
}

for(int i=a+1;i<=sqrt(n);i++){
    if(n%i==0){
        b=i;
        c=n/i;
        break;
    }
}

if(a!=-1&&b!=-1&&c!=1&&a!=b&&b!=c&&a!=c&&c>1){
    cout<<"YES"<<endl;
    cout<<a<<" "<<b<<" "<<c<<endl;
}else{
cout<<"NO"<<endl;
}

}
return 0;
}
