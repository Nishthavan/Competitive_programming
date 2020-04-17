#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int q = n-1;
	for(int i=1;i<=n;i++){
		//Spaces 
         for(int j=0;j<q;j++){
               cout<<"\t";
         }
         //First 
         for(int k=i;k<2*i-1;k++){
         	cout<<k<<"\t";
         }
         //Second
         for(int p=2*i-1;p>=i;p--){
         	cout<<p<<"\t";
         }
         cout<<endl;
         q--;
	}
	return 0;
}