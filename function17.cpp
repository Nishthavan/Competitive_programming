#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,jumps=0;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	while(i<n-1){
		if(i==n-2||v[i+2]==1){
			i++;
			jumps++;
		}
		else{
			i+=2;
			jumps++;
		}
	}
	cout<<jumps;
return 0;
}