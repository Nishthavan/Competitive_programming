#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  int T;
  cin>>T;
  for (int TEST = 1; TEST <=T; TEST++) {
    cout<<"Case #"<<TEST<<": ";
   int n;
   cin>>n;
   char array[1001];
   int pointer = 0;
   bool impossible = false;
   bool j = false;
   int freq[1441] = {0};
   char chara[1441] ;
   while(n--){
     j = false;
   int a,b;
   cin>>a>>b;
   for(int i=a;i<=b;i++){
     freq[i]++;
     chara[i] = 'C';
   }
   for(int i=a+1;i<b;i++){
      if(freq[i]==3){
        impossible = true;
       break;
      }
   }
   for(int i=a+1;i<b;i++){
     if(freq[i]==2){
       j = true;
       pointer++;
       if(chara[i]=='C'){
         for(int i=a;i<=b;i++){
           chara[i] = 'J';
         }
       array[pointer] = 'J';
     }
     else{
       array[pointer] = 'C';
     }
     }
   }
   if(!j){
     pointer++;
     array[pointer] = 'C';
   }
  }
  if(!impossible){
    for (int i = 1; i <= pointer; i++) {
      cout<<array[i];
    }
  }
  else{
    cout<<"IMPOSSIBLE";
  }
   cout<<endl;
  }
return 0;
}
