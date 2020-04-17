#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n){
       int k,odd=0,even=0;
       cin>>k;
       while(k){
           int last = k%10;
           if(last%2==0){
               even+=last;
           }
           else
               odd+=last;
            k /=10;
           }
           if(even%4==0 || odd%3==0){
               cout<<"Yes"<<endl;
           }
           else 
           cout<<"No"<<endl;
           n--;
       }
    }

