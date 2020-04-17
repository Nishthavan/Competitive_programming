#include<iostream>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
	ll n,max=-10000000;
	cin>>n;
    int ar[n];
	for (int i = 0; i < n; i++)
	{
		cin>>ar[i];
          if(max<ar[i]){
          	max = ar[i];
          }
	}
	cout<<max<<endl;
	return 0;
}