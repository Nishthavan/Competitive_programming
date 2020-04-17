#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void permutestring(string s,string cpy,int l){
   
   if(cpy[l]=='\0'){
    if(cpy<s){
      cout<<cpy<<endl;
    }
   }
   else{
  for(int i=l;cpy[i]!='\0';i++){
    swap(cpy[l],cpy[i]);
    permutestring(s,cpy,l+1);
  }
   }
}

int main(int argc, char const *argv[])
{
    string s;
    string cpy;
    cin>>s;
    cpy = s;
    sort(cpy.begin(),cpy.end());
    permutestring(s,cpy,0);
  return 0;
}