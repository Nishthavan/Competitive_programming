#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int c1,c2,c3,c4,ans1=0,ans2=0;
		cin>>c1>>c2>>c3>>c4;
		int r,c;
		cin>>r>>c;
		for(int i=0;i<r;i++){
			int n;
			cin>>n;
          n = n*c1;
          ans1 += min(n,c2);
		}
		ans1 = min(ans1,c3);
		
		for(int i=0;i<c;i++){
			int n;
			cin>>n;
		  n = n*c1;
          ans2 += min(n,c2);
		}
      ans2 = min(ans2,c3);

		cout<<min(ans1+ans2,c4)<<endl;
	}
	return 0;
}
