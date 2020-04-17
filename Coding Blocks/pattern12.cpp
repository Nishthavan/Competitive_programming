#include<iostream>
using namespace std;


void pascal(int n){
       int c;
	for(int l = 1;l<=n;l++){
        c = 1;
        //Spaces
        for(int j=l;j<=n;j++){
        	cout<<" ";
        }
        //Elements
        for(int i = 1;i<=l;i++){
            cout<<c<<" ";
            c = c*(l-i)/i;
        }
        cout<<endl;
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	pascal(n);
	return 0;
}