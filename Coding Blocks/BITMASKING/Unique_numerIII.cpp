#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int *arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}

	int cnt[64] = {0};

	for (int i = 0; i < n; i++)
	{
		int j = 0;
		int number = arr[i];
		while(number>0){
            cnt[j]+=(number&1);
			number>>=1;
			j++;
		}
		
	}

	for (int i = 0; i <=64; i++)
	{
		cnt[i]=cnt[i]%3;
	}

 int multiple = 1;
 int ans = 0;
	for (int i = 0; i < 64; i++)
	{
		ans += cnt[i]*multiple ;
		multiple*=2;
	}
	cout<<ans;
	return 0;
}