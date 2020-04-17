#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int ar[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>ar[i][j];
		}
	}

    for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout<<ar[j][3-i]<<" ";
		}
        cout<<endl;
	}

	return 0;
}






// 0,0 0,1 0,2 0,3 
// 1,0 1,1 1,2 1,3
// 2,0 2,1 2,2 2,3  
// 3,0 3,1 3,2 3,3 

