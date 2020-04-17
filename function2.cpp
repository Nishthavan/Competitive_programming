#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m,cur,scores,rank;
    cin>>n;
    vector<int> v(n);

    cpy_n(istream_iterator<int>(cin),n,v.begin());
    v.erase(unique(v.begin(),v.end()),v.end());

    cin>>m;
    cur = v.size()-1;
    while(m--){

    cin>>scores;

    while(cur>=0&&scores>=v[cur]) 
    	cur--;
 
    if(cur==-1) 
      rank = 1;

    else if(score==v[cur]){
    	rank = cur+1;
    } 
    else if(score<v[cur]){
    	rank = cur+2;
    }
 
     cout<<rank<<endl;

    }
	return 0;
}