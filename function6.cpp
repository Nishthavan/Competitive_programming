#include<iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <cassert>
using namespace std;
#define ll long long
ll r,sum = 0;
ll reverse(int c){
  if(c){
     r = c%10;
     sum = sum*10 + r;
     reverse(c/10);
  }
  else
  return sum; 
}

int main(int argc, char const *argv[])
{
	int i,j,k,count=0;
	cin>>i>>j>>k;
	for(int l=i;l<=j;l++){
        if(abs(l-reverse(l))%k==0){
        	count++;
        }
        
	}
	cout<<count;

	return 0;
}