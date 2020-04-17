#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	cin>>T;
	while(T--){
       int n;
       cin>>n;
       string s,t;
       cin>>s;

       for(int i=0;i<2*n-2;i++){
       	if(s[i]=='S'){
           t[i]='E';
       	}
       	if(s[i]=='E'){
           t[i]='S';
       	}
       }
       cout<<t<<endl;
	}
	return 0;
}