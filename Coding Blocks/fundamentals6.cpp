#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,octal=0;
	cin>>n;
	while(n){
        octal+=n%8*i;
        i*=10;
        n/=8;
	}
 cout<<octal;
	return 0;
}