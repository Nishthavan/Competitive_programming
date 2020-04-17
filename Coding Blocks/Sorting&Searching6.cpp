//AGGRESIVECOWS
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isgood(ll arr[],ll n,ll c,ll ans){
      ll currentcows = 1;
      ll prev = arr[0];
      for (ll i = 1; i < n; i++)
      {
      	if(arr[i]-prev>=ans){
      		currentcows++;
      		prev = arr[i];
      		if(currentcows==c)
      			return true;
      	}
      }
return false; 
}
ll main(ll argc, char const *argv[])
{ 
       ll n,c;
       cin>>n>>c;
       ll arr[n];
       for(ll i=0;i<n;i++){
       	cin>>arr[i];
       }
       sort(arr,arr+n);
     ll s = 0;
     ll e = arr[n-1];
     ll finalans = 0;
     while(s<=e){
          ll mid = (s+e)/2;
          if(isgood(arr,n,c,mid)){
             finalans = mid;
             s = mid+1;
          }
          else{
          	e = mid-1;
          }
     }

     cout<<finalans<<endl;

	return 0;
}