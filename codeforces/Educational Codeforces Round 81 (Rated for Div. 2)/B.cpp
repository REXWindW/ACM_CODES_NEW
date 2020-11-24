#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<map>
#include<queue>
#include<cmath>
#include<functional>
using namespace std;

template<class T>inline void read(T &x){x=0;char o,f=1;while(o=getchar(),o<48)if(o==45)f=-f;do x=(x<<3)+(x<<1)+(o^48);while(o=getchar(),o>47);x*=f;}
int cansel_sync=(ios::sync_with_stdio(0),cin.tie(0),0);
#define ll long long
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define repb(i,a,b) for(int i=(a);i>=b;i--)
#define INF 0x3f3f3f3f
#define cendl printf("\n")
ll gcd(ll a,ll b){ while(b^=a^=b^=a%=b); return a; }
//#define INF 0x7fffffff

const int MAXN = 1e5+5;
const int MAXX = 1e9+5;

char hc;
int n,x;
int a[MAXN];
ll sumx[MAXN];

void solve(){
	cin>>n>>x;
	sumx[0] = 0;
	rep(i,1,n){
		cin>>hc;
		a[i]= hc=='0'?1:-1;
		sumx[i]=sumx[i-1]+a[i];
	}
	int tt = sumx[n];
	if(tt == 0){//if the t is equal
		bool flag = 0;
		rep(i,0,n-1){
			if(sumx[i]==x){
				flag = 1; break;
			}
		}
		if(flag)cout<<"-1"<<endl;
		else cout<<0<<endl;
	}
	else{
		ll countt = 0;
		rep(i,0,n-1){
			if((x-sumx[i])%tt==0){
				if((x-sumx[i])*tt>=0){
					countt++; 
					//cout<<i<<' '<<sumx[i]<<endl;
				}
			}
		}
		cout<<countt<<endl;
	}
}

int main(){
	int z;
	cin>>z;
	while(z--)solve();
}
