#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	for(int i=n;i>0;i--){
		//spaces first
		for(int j=i-1;j>0;j--){
            cout<<" ";
		}
		//stars
		for(int j=0;j<n;j++){
            if(i==n){
            	cout<<"*";
            	continue;
            }
            else if(i==1){
            	cout<<"*";
            	continue;
            }
            else{
            	if(j==0||j==n-1){
            		cout<<"*";
            	}
            	else{
            		cout<<" ";
            	}
            }
		}
		cout<<endl;

	}
	return 0;
}