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
string s;
cin>>s;
bool allupper=true;
bool allupperexpectfirst=true;

for(int i=0;i<s.size();i++){
    if(!isupper(s[i]))
        allupper=false;
}
for(int i=1;i<s.size();i++){
    if(!isupper(s[i])) allupperexpectfirst=false;
}
if(allupper||allupperexpectfirst){
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z'){
        s[i]=toupper(s[i]);
    }else if(s[i]>='A'&&s[i]<='Z'){
        s[i]=tolower(s[i]);
    }
    }

}
cout<<s<<endl;
return 0;
}
