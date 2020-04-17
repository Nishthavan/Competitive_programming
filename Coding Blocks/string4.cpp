#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
    cin>>s;
	int freq[100] = {0};
    int k = 0;
    for(int i=0;i<101;i++){
     freq[i]++;
    }
	for (int i = 0; i < s.length()-1; i++)
	{
		if(s[i]==s[i+1]){
			freq[k]++;
		}
        else{
            k++;
        }
	}
   k = 0;
    for(int i=1;i<s.length();i++){
        if(i-1==0){
            cout<<s[0]<<freq[k];
            k++;
        }
        else{
        if(s[i-1]==s[i]){
            continue;
        }
      else{
          cout<<s[i]<<freq[k];
          k++;
       }
        }
    }
	return 0;
}