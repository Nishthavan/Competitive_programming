#include<iostream>
using namespace std;

bool ispalindrome(int arr[],int s,int n){
    
      if(s==n){
      	return true;
      }

      if(arr[s]!=arr[n]){
     	return false;
      }

   if(s<=n){
     return ispalindrome(arr,s+1,n-1);
    }
     return true;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
    if(ispalindrome(arr,0,n-1)){
    	cout<<"true";
    }
    else{
    	cout<<"false";
    }
	return 0;
}