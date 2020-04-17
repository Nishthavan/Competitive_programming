#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,k,diff=0;
	cin>>n>>k;
	std::vector<int> v(n);
	cin>>n>>k;
	int max=-1;
    for(int i=0;i<n;i++){
     cin>>v[i];
     if(v[i]>max){
     	max = v[i];
     }
    }
    if((max-k)>0){
    	cout<<max-k;
    }  
    else cout<<"0";
	return 0;
}