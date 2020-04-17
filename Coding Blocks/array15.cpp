#include<iostream>
#include<algorithm>
using namespace std;

void findTriplets(int arr[],int size,int k){

	sort(arr,arr+size);

    for (int i = 0; i < size; i++)
    {
    	int l = i+1;
    	int r = size-1;
       
    	while(l<r){
            if(arr[i]+arr[l]+arr[r]==k){
            	cout<<arr[i]<<", "<<arr[l]<<" and "<<arr[r]<<endl;
                l++;
            }
            else if(arr[i]+arr[l]+arr[r]>k){
                     r--;
            }
            else{
            	l++;
            }
    	}
    }
    return;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
       cin>>ar[i];
	}
	int key;
	cin>>key;
	findTriplets(ar,n,key);
	return 0;
}