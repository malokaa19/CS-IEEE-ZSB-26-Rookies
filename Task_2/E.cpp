#include <bits/stdc++.h>
using namespace std;
#define FAST std::ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }
#define int long long
#define vi vector<int>

int32_t main (){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n;
cin>>n;
string s;
cin>>s;
int freq[26];
for(int i=0;i<s.size();i++){
    char c= tolower(s[i]);
    freq[c-'a']++;
}
bool vaild=true;
for(int i=0;i<26;i++){
    if(freq[i]==0){
        vaild=false;
        break;
    }
}
if(vaild) cout<<"YES"<<endl;
else cout<<"NO"<<endl;

return 0;
}
