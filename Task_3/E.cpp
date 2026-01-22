#include <bits/stdc++.h>
using namespace std;
#define FAST std::ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }
#define vi vector<int>
#define endl "\n"

int32_t main (){
int a,b;
cin>>a>>b;
string s=to_string(a);
string x=to_string(b);
if(s>x){
    while(a--){
        cout<<x;
    }
}else if(s<x){
while(b--){
        cout<<s;
    }
}else{
while(a--){
    cout<<s;
}
}
return 0;
}
