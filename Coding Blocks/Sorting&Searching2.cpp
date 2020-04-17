//BINARY SEARCH
#include<iostream>
using namespace std;

int check(int k,int l){
	if(k==l)
		return 1;
	if(k>l)
        return 2;
    if(k<l)
    	return 3;
}

int binarysearch(int arr[],int n,int tofind){
    int start = 0,end = n;
    while(start<=end){
    	int mid = (start+end)/2;
        int l = check(arr[mid],tofind);
        if(l==1){
        	return mid;
        }
        if(l==2){
        	end = mid-1;
        }
        if(l==3){
        	start = mid+1;
        }
    }
    return -1;
}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int find;
	cin>>find;
	cout<<binarysearch(arr,n,find);
	return 0;
}