#include <iostream>
#include<cmath>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
	ll n;
	cin>>n;
   ll k = 2;
   while(k!=n/2+1){
   	if(n%k==0){
			k++;
   		continue;
   	}
   	else {
			k++;
   		cout<<"Not Prime";
   		return 0;
   	}
   }

   cout<<"Prime";
}
