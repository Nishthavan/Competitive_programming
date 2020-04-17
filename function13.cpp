#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n,c,m,choc=0,wrap=-1;
		 cin>>n>>c>>m;
         choc += n/c;
         wrap = n/c;
       while((wrap/m)!=0) {
          choc+= wrap/m;
          wrap = wrap%m;      
         }
      cout<<choc<<endl;
	 }
	return 0;
}