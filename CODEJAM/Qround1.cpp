#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{   
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		int k = n;
		int newN = 0;
		while(k){
			int g = 1;
			int ld = k%10;
			if(ld==4)
				ld = 2;

           newN = newN + g*ld;
			k = k/10;
			g=g*10;
		}
		cout<<newN<<" "<<n-newN;
	}
	return 0;
}