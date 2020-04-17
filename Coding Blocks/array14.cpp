 
// RAIN WATER HARVERSTING PROBLEM /../

#include<iostream>
using namespace std;

int Solution(int arr[],int n){
	int result = 0;
	int lo = 0, hi = n-1;
	int left = 0, right = 0;
	while(lo<=hi){
		if(arr[lo]<arr[hi]){
			if(arr[lo]>left){
				left= arr[lo];
			}
			else{
				result+=left-arr[lo];
			}
			lo++;
		}
		else{
			if(arr[hi]>right){
                right = arr[hi];
			}
			else{
				result+=right-arr[hi];
			}
			hi--;
		}
	}
	return result;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<Solution(arr,n);
	return 0;
}