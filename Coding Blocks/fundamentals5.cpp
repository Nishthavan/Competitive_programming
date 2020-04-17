#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int k,ans=0,p=1;
		cin>>k;
		while(k){
           int last = k%10;
           ans = ans + last * p;
           p *=2;
           k/=10;
		}
		cout<<ans<<endl;
	return 0;
}