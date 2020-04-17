#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	for(int i=n;i>=0;i--){
       for(int j=n;j>=i;j--){   
           cout<<j<<" ";
       }
       for(int j=4*i-2;j>0;j--){
           cout<<" ";
       }
       for(int j=i;j<=n;j++){
           if(j==0){
               j++;
           }
          cout<<j<<" ";
       }
       cout<<endl;
	}

    for(int i=1;i<=n;i++){
       for(int j=n;j>=i;j--){   
           cout<<j<<" ";
       }
       for(int j=0;j<4*i-2;j++){
           cout<<" ";
       }
       for(int j=i;j<=n;j++){
          cout<<j<<" ";
       }
       cout<<endl;
	}

	return 0;
}