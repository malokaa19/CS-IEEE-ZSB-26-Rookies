#include <bits/stdc++.h>
using namespace std;
#define FAST std::ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }
#define int long long
#define vi vector<int>
#define endl "\n"


int32_t main (){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin>>t;
while(t--){
    int a,b,c;
    int mx=INT_MIN;
    int mn=INT_MAX;
    int sec=0;
    cin>>a>>b>>c;
    mx=max((a,b),c);
    if(a<b&&a<c){
        mn=a;
    }else if(b<a&&b<c){
    mn=b;
    }else{
    mn=c;
    }
    sec=(a+b+c)-(mx+mn);
    if(mx+mn==sec||mx+sec==mn||mn+sec==mx){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
}

return 0;
}
