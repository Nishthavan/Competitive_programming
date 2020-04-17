 #include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{    
	string s;
    cin>>s;
    
    for (int i = 0; i < s.length()-1; i++)
    {  cout<<s[i];
    	cout<<s[i+1]-s[i];
    }
    cout<<s[s.length()-1];
	return 0;
}