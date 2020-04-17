#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	int c[n];
	for(int i=0;i<n;i++)
		cin>>c[i];

	int curr = 0;
	int e = 100;
	curr = (curr + k)%n;
	e -= 1 + c[curr]*2;

	while(curr!=0){
      curr = (curr + k)%n;
      e -= 1 + c[curr]*2;
	}
   cout<<e;
	return 0;
}