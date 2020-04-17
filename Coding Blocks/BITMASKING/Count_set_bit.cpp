#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	std::ios_base::sync_with_stdio(false);
	int T;
	cin>>T;
	while(T--){
		int n,count=0;
		cin>>n;
		for(;n>0;n>>=1){
           if(n&1){
           	count++;
           }
		}
		cout<<count<<endl;
	}
	return 0;
}