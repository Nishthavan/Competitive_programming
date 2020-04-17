#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	cin>>T;
    while(T--){
    	int n;
    	cin>>n;
    	int arr[n];
        int Fsum = 0;
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
            Fsum+=arr[i];
            }
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            sum = sum<0?0:sum;
            Fsum = max(sum,Fsum);
        }
        	cout<<Fsum<<endl;
    	}
	return 0;
}