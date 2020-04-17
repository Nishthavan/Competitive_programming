#include <iostream>
#define F for(int i=1;i<=n;i++)
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
      F{
        if(i>2){
        		int k = i-2;
        		cout<<i<<"\t";
        		while(k--){
        			cout<<"0"<<"\t";
        		}
        		cout<<i<<"\t"<<endl;
        	}
        else{
        	int k = i;
        	while(k--)
        	cout<<i<<"\t";

        cout<<endl;
        }
        
        
      }

	return 0;
}