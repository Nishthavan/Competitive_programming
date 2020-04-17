//KTH ROOT
#include<iostream>
#include<cmath>
#define ll long long int 
using namespace std;

bool isanswer(ll n,ll k,ll ans){
	if(pow(ans,k)<=n){
		return true;
	}
		return false;
}
int main()
{
    int T;
    cin>>T;
    while(T--){
	ll n,k;
	cin>>n>>k;
	ll s = 1,e = n;
	ll ans = 0;
	while(s<=e){
		ll mid = (s+e)/2;
        if(isanswer(n,k,mid)){
        	ans = mid;
            s = mid+1;
        }
        else{
        	e = mid - 1;
        }
	}
    cout<<ans<<endl;
    }
	return 0;
}