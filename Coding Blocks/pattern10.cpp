#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int h = (n+1)/2;
    int e1,e2;
	for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                if(i<=h){
                	if(j==1){
                       e1 = i;
                	}
                	else{
                	cout<<"\t";
                	e1 = i;
                    }
                }
                else{
                  if(j==1){
                         e1 = n-i+1;
                	}
                	else{
                		cout<<"\t";
                		e1 = n-i+1;
                	}
                }
                if(j<=h){
                	e2 = j;
                }
                else{
                	e2 = n-j+1;
                }

                if(e1+e2<=h+1){
                	cout<<"*";
                }
                else{
                	cout<<" ";
                }
	}
    cout<<endl;
}
	return 0;
}