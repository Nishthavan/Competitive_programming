#include<iostream>
using namespace std;

int series(int n){
	return 3*n+2;
}
int main(int argc, char const *argv[])
{
	int n,m,count=0;
	cin>>n;
    cin>>m;

    for(int i=1;i<=100;i++){
     if(series(i)%m!=0){
        cout<<series(i)<<endl;
        count++;
        if(count==n){
        	return 0;
        }
     }
    }
}