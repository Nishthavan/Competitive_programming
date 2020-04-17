#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	int count0=0,count1=0,count2=0;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
		
		if(arr[i]==0)
			count0++;

	    if(arr[i]==1)
			count1++;

	   if(arr[i]==2) 
          count2++;
	}
    
	while(count0--)
		cout<<0<<endl;
	

	while(count1--)
		cout<<1<<endl;
     

	while(count2--)
		cout<<2<<endl;
     

	return 0;
}