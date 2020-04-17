#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{   int p,d,m,s,count=0;
	cin>>p>>d>>m>>s;
	while(s!=0){
		if(p>m){
			s = s - p;
			p = p - d;
			count++;
			continue;
		}
       s = s - p;
       count++;
	}

	cout<<count;
	return 0;
}