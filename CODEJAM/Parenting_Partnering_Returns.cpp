#include<iostream>
#define f(i,k,n) for(int i=k;i<n;i++)
using namespace std;

int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  int T;
  cin>>T;
  for (int TEST = 1; TEST <=T; TEST++) {
   cout<<"Case #"<<TEST<<": ";
   int n;
   cin>>n;
   int freq[1441] = {0};
   while(n--){
     int a,b,k=0;
     char ch;
     cin>>a>>b;
     f(i,a,b){
       freq[i]++;
       if(freq[i]==3){
         k = i;
         cout<<"IMPOSSIBLE";
         break;
       }
       if(freq[i]==2){
         k = i;
         cout<<"J";
         break;
       }
       if(freq[k]!=2 && freq[k]!=3){
         cout<<"C";
       }
     }
   }
    cout<<endl;
  }
  return 0;
}
