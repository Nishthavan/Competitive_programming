#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	int n,count = 0,i=0;
	getline(cin,s);
	cin>>n;
	while(n){
		if(i==s.size){
          i=0;
		}
		if(s[i]=='a'){
			count++;
		}
      n--;
      i++;
	}
cout<<count;
	return 0;
}