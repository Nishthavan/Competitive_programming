#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#define FOR(i, j, k, inc) for (int i=j ; i<k ; i+=inc)
#define RevFOR(i, j, k, dec) for (int i=j ; i>=k ; i-=dec)

using namespace std;

void insertion_sort(vector<int> &v){
  
    if(v.size()==1){
    	return;
    }
    FOR(i,1,v.size();1){

       int select = v[i];
       int pointer = i-1;

       while(v[pointer]>select&&pointer>=0){
       	   v[pointer+1] = v[pointer];
           pointer--;
       }
     v[pointer+1] = select;
    }

return;
}
void display(vector<int> &v){

FOR(i,0,v.size(),1){
    cout<<v[i]<<" ";
}
return;
}
int main(int argc, char *argv[]){

	 int n;
	 cin>>n;
     std::vector<int> inp(n);
     FOR(i,0,n,1){
     	cin>>inp[i];
     }
insertion_sort(inp);
display(inp);
}