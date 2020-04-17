#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if(i>=2){
				int k = i-2+1;
				cout<<i;
                    while(k--){
                    	cout<<"0";
                    }
				cout<<i;
				break;
			}
 
			else{
                  cout<<"1";                 
			}
		}
		cout<<endl;
	}
	return 0;
}

