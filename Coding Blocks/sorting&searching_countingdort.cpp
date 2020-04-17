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

int main(int argc, char *argv[]){
	
	int n;
	cin>>n;
	std::vector<int> inp(n);
     

     FOR(i,0,n,1){
     	cin>>inp[i];
     }
int max = *max_element(inp.begin(),inp.end());
int min = *min_element(inp.begin(),inp.end());

int range = max-min+1;

     std::vector<int> count(range,0);

for(auto k:inp){
	count[k-min]++;
}

FOR(i,1,range,1){
	count[i]+=count[i-1];
}
std::vector<int> output(n);

FOR(i,0,n,1){
     output[count[inp[i]-min]-1] = inp[i];
     count[inp[i]-min]--;
}
FOR(i,0,n,1){
	cout<<count[i]<<" ";
}


}
