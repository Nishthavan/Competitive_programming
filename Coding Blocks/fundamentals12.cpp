#include<iostream>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
	ll n,max=100000000,k;
    cin>>k;
    while(k--){
     cin>>n;
         if(n>max){
         	max = n;
         	break;
         }
     max = n;
    }
    while(k--){
    	cin>>n;
    	if(n<max){
    		cout<<"False";
    		return 0;
    	}
    	max = n;
    }

    cout<<"True";
}