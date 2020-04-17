#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

bool checkifpossible(string s,string s1,int k){
 int x = s.length(),y = s1.length(),same=0;
 if(x+y<=k){
 	return true;
 } 

 for(int i=0;i<min(x,y);i++){
    if(s[i]==s1[i]){
    	same++;
    }
 }

 if((k-x-y+2*same)%2==0&&k-x-y+2*same>=0){
 	return true;
 }
 return false;
}

int main(int argc, char const *argv[])
{
	string s,s1;
	getline(cin,s);
	getline(cin,s1);
	int k;
	cin>>k;

	if(checkifpossible(s,s1,k)){
		cout<<"YES";
	}
	else cout<<"NO";
	return 0;
}