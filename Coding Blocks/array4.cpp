
/// OR WE CAN JUST CREATE NUMBER FROM THESE TWO ARRAYS AND THEN FURTHER ADD THOSE 
/// NUMBERS AND STORE THEM IN AN ARRAY AND BOOM !!!!! SOLVED

#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	int arr1[n],arr2[m];
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>arr1[i];
	}
    cin>>m;
	for (int i = 0; i < m; i++)
	{
		cin>>arr2[i];
	}
    int result[max(m,n)] = {0};
    int K ;
    int diff = n-m;
    if(diff<0){
       int carry = 0;
    	for(int i=m-1;i>=0;i--){
    		if(i+diff<0){
    			K = 0;
    		}
    		else{
    			K = arr1[i+diff];
    		}
            int sum =carry + K + arr2[i];
            carry = sum/10;
            sum = sum%10;
            result[i] = sum;
    	}
    	
    }
    else if(diff>0){
        int carry = 0;
    	for(int i=n-1;i>=0;i--){
    		if(i-diff<0){
    			K = 0;
    		}
    		else{
    			K = arr2[i-diff];
    		}
            int sum = carry + arr1[i] + K;
            carry = sum/10;
            sum = sum%10;
            result[i] = sum;
    	}
    	
    }
    else{
    	int carry = 0;
    	for(int i=n-1;i>=0;i--){
            int sum = carry + arr1[i] + arr2[i];
            carry = sum/10;
            sum = sum%10;
            result[i] = sum;
    	}
    }

    for(int i=0;i<max(m,n);i++){
        cout<<result[i]<<", ";
    }
    cout<<"END";
	return 0;
}