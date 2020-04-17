#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,k;

	cin>>n;
	int arr[n];
	int num1 = 0,m=1,num2=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    for(int i=n-1;i>=0;i--){
        num1 = num1+m*arr[i];
		m = m*10;
    }

	cin>>k;
	int arr2[k];
	m = 1; 
	for(int i=0;i<k;i++){
		cin>>arr2[i];
	}
     for(int i=k-1;i>=0;i--){
        num2 = num2+m*arr2[i];
		m = m*10;
    }
	num1 = num1+num2;
	int g;
    if(k>n){
    g = k;
    }else{
    g = n;
    }
    int farr[g];
    int y = g;
    while(num1){
        int l = num1%10;
        farr[y-1] = l;
        y--;
        num1 = num1/10;
    }
    for (int i = 0; i < g; i++)
    {
    	cout<<farr[i]<<", ";
    }
    cout<<"END";
	return 0;
}