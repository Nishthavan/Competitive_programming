#include<bits/stdc++.h>
#define ll long long
using namespace std;

void insertionsort(ll *arr,ll n){
	
	
	for (ll i = 0; i < n-1; i++)
	{
		ll min = arr[i];
		ll pollertomin = i;
		for (ll j = i+1; j < n; j++)
		{
			if(min>arr[j]){
				min = arr[j];
				pollertomin = j;
			}
		}
      swap(arr[i],arr[pollertomin]);
	}
  return;
}

int main(ll argc, char const *argv[])
{
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
		cin>>arr[i];

    insertionsort(arr,n);

    for(ll i=0;i<n;i++)
		cout<<arr[i]<<" "<<endl;
	return 0;
}