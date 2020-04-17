#include <iostream>
#include<cmath>
using namespace std;

int convertFtoC(int f){
    return (5.0/9)*(f-32);
}
int main() {
    int l,h,step;
    cin>>l>>h>>step;
    for(int i=l;i<=h;i+=step){
          cout<<i<<" "<<convertFtoC(i)<<endl;
    }
}