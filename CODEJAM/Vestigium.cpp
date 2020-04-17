#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{

	std::ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	for (int i = 1; i <=t; i++)
	{
	int n;
	cin>>n;
	int trace=0,row=0,column=0;
	
	int arr[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{

			cin>>arr[i][j];
			if(i==j){
				trace+=arr[i][j];
			}
		}
	}
      
 for (int j = 0; j < n; j++)
	{
	int freq[101] = {0};

     for (int i = 0; i < n; i++)
     {
     	freq[arr[j][i]]++;
     	if(freq[arr[j][i]]>1){
     		row++;
             break;
     	}
     }
		
	}

for (int j = 0; j < n; j++)
	{
		int freq[101] = {0};

     for (int i= 0;i< n; i++)
     {
     	freq[arr[i][j]]++;
     	if(freq[arr[i][j]]>1){
     		column++;
             break;
     	}
     }
}

cout<<"Case #"<<i<<": "<<trace<<" "<<row<<" "<<column<<endl;
	}
	
	return 0;
}

