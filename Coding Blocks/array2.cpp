#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		cin>>arr[i][j];
    	}
    }
    
    for(int i=0;i<m;i++){
    	for(int j=0;j<n;j++){
    		if(i%2!=0){
                for(int k=n-1;k>=0;k--){
                   cout<<arr[k][i]<<", ";
                }
                	break;
                }
    		else{
    		cout<<arr[j][i]<<", ";
    	}
    	}
    }
	return 0;
}


// 0,0 0,1 0,2 0,3
// 1,0 1,1 1,2 1,3
// 2,0 2,1 2,2 2,3
// 3,0 3,1 3,2 3,3 


