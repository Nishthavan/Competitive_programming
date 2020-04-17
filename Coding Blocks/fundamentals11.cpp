#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m,count=0;
	cin>>n>>m;
	while(n){
		int last = n%10;
		n/=10;
		if(last==m){
			count++;
		}
	}
	cout<<count;
	return 0;
}