#include <bits/stdc++.h>
using namespace std;
#define FAST std::ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }
#define int long long
#define vi vector<int>
#define endl "\n"
string s;
int n;
vector<string> answer;
void permute(int i){
if(i==n){
 answer.push_back(s);
 return;
}
for (int j=i;j<n;j++){
    swap(s[i], s[j]);
    permute(i + 1);
    swap(s[i], s[j]);
}
}
int32_t main (){
cin>>s;
n=s.size();
permute(0);

sort(answer.begin(),answer.end());
answer.erase(unique(answer.begin(),answer.end()),answer.end());
cout<<answer.size()<<endl;
for(int i=0;i<answer.size();i++){
    cout<<answer[i]<<endl;
}
}
