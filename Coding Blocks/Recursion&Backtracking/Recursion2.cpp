#include<iostream>
#include<cstring>
using namespace std;

void checkandupdate(char *s){

      if(s[0]=='\0'){
      return;
       }

      if(s[0]==s[1]){
        int i = 0;
          while(s[i]!='\0'){
          s[i] = s[i+1];
          i++;
          }
          checkandupdate(s);
      }
      checkandupdate(s+1);
    return;
}

int main(int argc, char const *argv[])
{
    char s[50];
    cin>>s;
    checkandupdate(s);
    cout<<s;
  return 0;
}
