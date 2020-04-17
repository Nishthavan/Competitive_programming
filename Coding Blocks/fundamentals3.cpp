#include<iostream>
#include<cmath>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
	ll n,k=0;
	cin>>n;

	while(n){
     k = k*10;
     k+=n%10;
     n = n/10;
	}
	cout<<k;
	return 0;
}