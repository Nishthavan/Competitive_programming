#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    char max1 ;
    int max  = 0;
	string s;
	cin>>s;
	int freq[130] = {0};
	for(int i=0;i<s.length();i++){
        freq[s[i]]++;
        if(freq[s[i]]>max){
            max1 = s[i];
            max = freq[s[i]];
        }
	}
   cout<<max1;
	return 0;
}