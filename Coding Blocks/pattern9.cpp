#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==n/2){
			    cout<<"*";
            }
		    else if(j==n/2){
		    	cout<<"*";
		    }
            else if(i<n/2&&j==0){
		    	cout<<"*";
		    }
		    else if(j<n/2&&i==n-1){
		    	cout<<"*";
		    }
		    else if(j>n/2&&i==0){
		    	cout<<"*";
		    }
		    else if(i>n/2&&j==n-1){
		    	cout<<"*";
		    }
		    else{
		    	cout<<" ";
		    }

		}
		cout<<endl;
	}
	return 0;
}