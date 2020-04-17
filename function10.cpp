#include<iostream>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
	int n,count=0;
	for(int i=0;i<n;i++){
		ll c;
		cin>>c;
		ll k = c;
		while(k!=0){
         int j = k%10;
         if(j==0)
         {
         	k = k/10; continue;
          }
         if(c%j==0){
         	count++;
         }
         k = k/10;
		}
	}
	return 0;
}