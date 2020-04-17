#include<iostream>
using namespace std;

void fib(int f[],int n){
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i <n; i++)
	{
		f[i] = f[i-1]+f[i-2];
	}
	return ;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int N = n*(n+1)/2;
	int f[N+1];
	fib(f,N);
	int fib_index=0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout<<f[fib_index]<<" ";
			fib_index++;
		}
        cout<<endl;
	}
	return 0;
}