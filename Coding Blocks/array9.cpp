#include<iostream>
using namespace std;

int MAXSUM(int r[], int n){
	int max_0 = kadane(r,n);
	int wrap = 0;
	for (int i = 0; i < n; i++)
	{
		wrap += r[i];
		//REVERSING SIGNS of ARRAY
		r[i] = -r[i];
	}
	int inverse_wrap = kadane(r,n);
	wrap = wrap+inverse_wrap;

	return max_0>wrap?max_0:wrap;
}

int kadane(int r[], int n){
      int maxuptonow = 0, maxrightnow = 0;
      for(int i=0;i<n;i++){
      	maxrightnow += r[i];
      	maxrightnow = maxrightnow<0?0:maxrightnow;
      	maxuptonow = max(maxrightnow,maxuptonow);
      }

      return maxuptonow;
}
int main(int argc, char const *argv[])
{
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int r[n];
		for(int i=0;i<n;i++){
			cin>>r[i];
		}
		cout<<MAXSUM(r,n)<<endl;
	}
	return 0;
}