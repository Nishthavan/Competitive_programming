#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
	  string s,s1;
      cin>>s>>s1;
      int k = s.length();
      int i = 0;
      while(i<k){
        if(s[i]==s1[i]){
         cout<<"0";
        }
        else{
        	cout<<"1";
        }
        i++;
      }
    }
	return 0;
}