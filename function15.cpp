#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{   int n,count,k;
	cin>>n;
	cin>>k;
	std::vector<int> v(n);
     for(int i=0;i<n;i++){
    	cin>>v[i];
     }
     int f[k] = {0};
	
	for(int i=0;i<n;i++){
        f[v[i]%k]++;
	}
	if(k%2==0){
		f[k/2] = min(f[k/2],1);
	}
	count = min(f[0],1);
	for(int i=1;i<=k/2;i++){
        count+=max(f[i],f[k-i]);
	}
	cout<<count;
	return 0;
}