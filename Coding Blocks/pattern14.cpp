#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int k = n-1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		for(int j=1;j<=k;j++){
			cout<<"*";
		}
		cout<<endl;
		k--;
	}
	return 0;
}