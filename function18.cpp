#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,max=0;
	cin>>n;
	std::vector<int> v(n);
	int freq[100] = {0};
	for(int i=0;i<n;i++){
		cin>>v[i];
		freq[v[i]]++;
	}
	for(int i=0;i<100;i++){
      if(freq[i]>max){
      	max = freq[i];
      }
	}
	cout<<n-max;
	return 0;
}