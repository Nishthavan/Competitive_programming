#include<iostream>
#include<string>
using namespace std;

bool cmp(string s,string s1){
      string X = s.append(s1);
      string Y = s1.append(s);

       return X>Y?true:false;
   }
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	string s[n];
   for(int i=0;i<n;i++){
   	cin>>s[i];
   }
    sort(s,s+n,cmp);
   for(int i=0;i<n;i++){
   	cout<<s[i];
   }
	return 0; 
}