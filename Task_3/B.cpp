#include <bits/stdc++.h>
using namespace std;
#define FAST std::ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }
#define vi vector<int>
#define endl "\n"

int32_t main (){
int n ,k;
cin>>n>>k;
int y[2*n+1];
for(int i=0;i<2*n+1;i++){
    cin>>y[i];
}
for(int i=1;i<2*n;i+=2){
if(k==0) break;
if(y[i-1]<y[i]-1&&y[i]-1>y[i+1]){
    y[i]=y[i]-1;
    k--;
    }
}
for(int i=0;i<2*n+1;i++){
    cout<<y[i]<<" ";
}
return 0;
}
