#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	int ar[n][m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin>>ar[i][j];
		}
	}

    int maxlp = n-1;
    int maxrp = m-1;
    int lp = 0;
    int rp = 0;
   while(lp<=maxlp&&rp<=maxrp){
     for(int i=lp;i<=maxlp;i++){
     	cout<<ar[i][rp]<<", ";
     }
     rp++;
     for(int i=rp;i<=maxrp;i++){
     	cout<<ar[maxlp][i]<<", ";
     }
     maxlp--;
     for(int i=maxlp;i>=lp;i--){
     	cout<<ar[i][maxrp]<<", ";
     }
     maxrp--;
     for(int i=maxrp;i>=rp;i--){
     	cout<<ar[lp][i]<<", ";
     }
     lp++;
   }
   cout<<"END";
	return 0;
}



