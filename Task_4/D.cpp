#include <bits/stdc++.h>
using namespace std;
#define FAST std::ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }
#define int long long
#define vi vector<int>
#define endl "\n"
string s,c;
int target;
int total=0;
int good=0;
void calc(int i,int pos){
if(i==c.size()){
    total++;
    if(pos==target)
        good++;
    return;
}
if(c[i]=='+')
    calc(i+1,pos+1);
else if(c[i]=='-')
    calc(i+1,pos-1);
else{
    calc(i+1,pos+1);
    calc(i+1,pos-1);
}
}
int32_t main (){
cin>>s>>c;
target=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='+') target++;
    else target--;
}
calc(0,0);
cout<<fixed<<setprecision(12)<<(double)good/total<<endl;
}
