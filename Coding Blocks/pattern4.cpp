#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
             if(i>=j){
             	cout<<j<<"\t";
             }
             else{
             	cout<<"\t";
             }
		}

		for(int k=n-1;k>0;k--){
			if(i>=k){
                if(k==1){
                    cout<<k;
                }
                else{
				cout<<k<<"\t";
                }
			}
			else{
				cout<<"\t";
			}
		}
		cout<<endl;
	}

	return 0;
}