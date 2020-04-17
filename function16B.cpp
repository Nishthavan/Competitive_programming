#include<iostream>
#include<string>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	ll n,counta = 0,count = 0;
	getline(cin,s);
	cin>>n;
	for(int i=0;i<s.size();i++){
		if(s[i]=='a'){
			counta++;
		}
	}
	ll k = n/s.size();
    count = counta*k;
   for(int i=0;i<n%s.size();i++){
   	if(s[i]=='a'){
   		count++;
   	}
   }
cout<<count;
	return 0;
}