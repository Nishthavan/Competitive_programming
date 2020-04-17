#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,t;
	cin>>n>>t;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	while(t--){
		int i,j,min=10000;
		cin>>i>>j;
		for(int i=i;i=<j;i++){
             if(min>arr[i]){
             	min = arr[i];
             }
		}
		cout<<min<<endl;
	}
	return 0;
}