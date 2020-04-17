#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
    int a1[n],a2[n];
	for(int i=0;i<n;i++){
        cin>>a1[i];
	}
	for(int i=0;i<n;i++){
        cin>>a2[i];
	}

   int ar[2*n] = {0};
	int i=0,j=0;
	for (int k = 0; k< 2*n; k++)
	{
		if(a1[i]<a2[j]){
			ar[k] = a1[i];
			i++;

		}else {
           ar[k] = a2[j];
            j++;
		}
	}

	cout<<ar[n-1];
	return 0;
} 