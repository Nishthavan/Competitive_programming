#include<iostream>
#include<vector>
#define INT_MIN -1000000
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	int ans = INT_MIN;
	cin>>n>>m;
	for (int i = n; i <=m; i++)
	{
		for (int j = n+1; j <=m; j++)
		{
			if(ans<(i^j))
				ans = i^j;
		}
	}
cout<<ans;

	return 0;
}