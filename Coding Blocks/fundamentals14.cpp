#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,k,count=0,number=0;
	cin>>n;
     k=n;
	while(n){
     n = n/10;
     count++;
	}
    n = k;
	while(k){
		int last = k%10;
        number += pow(last,count);
        k = k/10; 
	}

if(number == n){
   cout<<"True";
}
else {
   cout<<"False";

}
	return 0;
}

