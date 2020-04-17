#include<iostream>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	cin>>T;
	while(T--){
		ll n,max = 0;
		cin>>n;
		ll arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		ll start[n],end[n];
		start[0] = 1;
		end[n-1] = 1;
        for(int i=1;i<n;i++){
			start[i] = arr[i]>=arr[i-1]?start[i-1]+1:1;
		}
		for(int i=n-2;i>=0;i--){
			end[i] = arr[i]>=arr[i+1]?end[i+1]+1:1;
		}
		 for(int i=0;i<n;i++){
			if(start[i]+end[i]-1>max){
				max = start[i]+end[i]-1;
			}
		}
  cout<<max<<endl;
	}
	return 0;
}