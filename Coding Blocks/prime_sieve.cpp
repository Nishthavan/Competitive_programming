#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[]) {
  std::vector<bool> v(10000000,1);
  v[0] = v[1] = 0;
  for (int i = 2; i*i<=10000000; i++) {
     if(v[i]){
        for (int j = i*i; j <=10000000; j+=i) {
           v[j] = 0;
        }
     }
  }

 int n;
 cin>>n;
 int counter = 1;
 while (n&&counter<10000000) {
   if(v[counter]){
     n--;
   }
    counter++;
 }
 cout<<counter-1;
  return 0;
}
