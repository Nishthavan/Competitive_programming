#include<iostream>
#include<cmath>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
	ll n;
	cin>>n;

    if(n==1 || n==2){
    	cout<<"-1";
     }

    else{
    	if(n%2!=0){
    		ll p = (n+1)/2;
    		ll q = (n-1)/2;
            

    		ll a = (p+q)*(p-q);
    		ll b = 2*p*q;
    		ll c = (p*p) + (q*q);

    		if(c*c == b*b + a*a) {
    			cout<<b<<" "<<c;
    		}
    		else {
    			cout<<"-1";
    		}
}

    	else{
    		ll p = n/2;
    		ll q = 1;
            
    		ll a = (p+q)*(p-q);
    		ll b = 2*p*q;
    		ll c = (p*p) + (q*q);

    		if(c*c == b*b + a*a) {
    			cout<<a<<" "<<c;
    		}
    		else {
    			cout<<"-1";
    		}
    	}
    
}
	return 0;
    
}




