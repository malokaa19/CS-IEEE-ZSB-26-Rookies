#include <bits/stdc++.h>
using namespace std;
#define FAST std::ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }
#define int long long
#define vi vector<int>
#define endl "\n"
const int MAX = 1000005;
int spf[MAX];
void sieve(){
for(int i=2;i<MAX;i++) spf[i]=i;
    for(int i=2;i*i<MAX;i++){
        if(spf[i]==i){
            for(int j=i*i;j<MAX;j += i)
                if (spf[j]==j) spf[j]=i;
        }
    }
}

int countdivisors(int x){
    int totaldivisors=1;
    while (x>1) {
        int p=spf[x];
        int counter=0;
        while(x%p==0){
            counter++;
            x/=p;
        }
        totaldivisors*=(counter+1);
    }
    return totaldivisors;
}
int32_t main (){
FAST
sieve();
int n;
cin>>n;
while(n--){
    int x;
    cin>>x;
cout<<countdivisors(x)<<endl;

}
return 0;
}
