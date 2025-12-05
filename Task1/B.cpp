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
int w;
cin>>w;
if(w>2){
    if(w%2==0){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
}
else{
cout<<"NO"<<endl;
}

return 0;
}
