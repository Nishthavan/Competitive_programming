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

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int m,k,count;
	for(int i=0;i<n;i++){
	count = 0;
	cin>>m>>k;
	std::vector<int> v(m);
	for(int j=0;j<m;j++){
		cin>>v[j];
         if(v[j]<=0){
         	count++;
         }
	}
      if(count>=k){
      	cout<<"NO"<<endl;
      }
      else cout<<"YES";
	}
	return 0;
}