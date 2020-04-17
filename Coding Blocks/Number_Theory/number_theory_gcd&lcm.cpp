#include<iostream>
using namespace std;

int gcd(int n1,int n2){
	if(n2!=0){
		gcd(n2,n1%n2)
	}
	else{
		return n1;
	}
}
int lcm(int n1,int n2){
	return (n1*n2)/gcd(n1,n2);
}
int main(int argc, char const *argv[])
{
	int n1,n2;
	cin>>n1>>n2;
	cout<<gcd(n1,n2);
	cout<<endl<<lcm(n1,n2);
	return 0;
}