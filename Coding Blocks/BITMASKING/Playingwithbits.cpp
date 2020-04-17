/// USING BITWISE OPERATOR //
#include<bits/stdc++.h>
using namespace std;
#define f(i,k,n) for (i = k; i <=n; i++)

 int int main(int argc, char const *argv[]) {
   std::ios_base::sync_with_stdio(false);
   int n;cin>>n;
   while(n--){
     int count = 0,a,b; cin>>a>>b;
     int i;
     f(i,a,b){
       int j  = i;
      for (; j > 0 ; j = j>>1) {
       if(j&1){
         count++;
       }}}
     cout<<count<<endl; }
   return 0;
 }


/////////////////////// ITERATIVE WITHOUT USING ///////////////  BITWISE OPERATOR //////////////////
// #define fo(i,k,n) for(i = k;i<=n; i++)
// int main(int argc, char const *argv[]) {
//   std::ios_base::sync_with_stdio(false);
//   int T;
//   cin>>T;
//   while(T--){
//     int count  = 0;
//     int a,b;
//     cin>>a>>b;
//     int i;
//     fo(i,a,b){
//      int temp  = i;
//       while(temp!=0){
//         if(temp%2==0){
//             temp = temp/2;
//         }
//         else{
//             temp = temp/2;
//            count++;
//         }
//       }
//     }
//     cout<<count<<endl;
//   }
//   return 0;
// }
