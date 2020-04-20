#include<iostream>
#include<cstring>
using namespace std;

void checkandupdate(char *s,int n){
      if(n==strlen(s)){
		  return;
	  }
      if(s[n]==s[n+1]){
      	     for(int i=strlen(s);i>n;i--){
                 s[i] = s[i-1];
      	     }
      s[n+1] = '*';
      }
      checkandupdate(s,n+1);
    return;
}

int main(int argc, char const *argv[])
{
    char s[1000];
    cin>>s;
    checkandupdate(s,0);
    cout<<s;
	return 0;
}
