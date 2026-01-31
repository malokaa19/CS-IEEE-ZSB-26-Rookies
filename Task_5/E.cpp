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
int counter=0;
if(n%2!=0){
    counter=0;
}else{
counter=(n/4)+1;
}
cout<<counter<<endl;
}
return 0;
}
