//book alocation
#include<iostream>
#define ll long long int
using namespace std;

bool isvalidconfig(int arr[],int n,int k,int ans){
    int student = 1;
    int current_sum = 0;

    for (int i = 0; i < n; i++)
     {
    	if(current_sum+arr[i]>ans){
    		current_sum = arr[i];
    		student++;
    		if(student>k){
    			return false;
    		}
    	}
    	else{
    		current_sum += arr[i]; 
    	}
     }
   return true;
}


int binaryserachbooks(int arr[],int n,int k){
    int s,e;
    int maxsum  = 0,finalans = arr[n-1];
    for (int i = 0; i < n; i++)
		{
		   maxsum+=arr[i];
		}
	s = arr[n-1];
	e = maxsum;
	while(s<=e){
		int mid = (s+e)/2;
		if(isvalidconfig(arr,n,k,mid)){
           finalans = mid;
            e = mid-1;
		}
		else{
          s = mid+1;
		}
	}
    return finalans;
}

int main(int argc, char const *argv[])
{
	int T;
	cin>>T;
	while(T--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
		   cin>>arr[i];
		}
    cout<<binaryserachbooks(arr,n,k)<<endl;
	}
	return 0;
}