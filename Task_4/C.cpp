#include <bits/stdc++.h>
using namespace std;
#define FAST std::ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }
#define int long long
#define vi vector<int>
#define endl "\n"
vi a;
int total=0;
int ans=LLONG_MAX;
void calc(int n,int sum1){
if(n==0){
    ans=min(ans,llabs(sum1-(total -sum1)));
    return;
}
calc(n-1,sum1+a[n-1]);
calc(n-1,sum1);
}
int32_t main (){
int n;
cin>>n;
a.resize(n);
cin>>a;
for(int i=0;i<n;i++){
    total+=a[i];
}
calc(n,0);
cout<<ans;
return 0;
}
