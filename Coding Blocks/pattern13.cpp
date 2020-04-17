#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
    int k = 0;
	for(int i=n;i>0;i--){
       for(int j=1;j<=i;j++){
       	cout<<j<<" ";
       }
       for(int j = 0;j<2*k-1;j++){
       	if(i==n){
       		break;
       	}
       	else{
          cout<<"*"<<" ";

       	}
       }
       cout<<endl;
       k++;
	}
	return 0;
}