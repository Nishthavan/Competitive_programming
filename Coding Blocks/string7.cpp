//magical park 
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m,k,s;
	cin>>n>>m>>k>>s;
	char ki[n][m];
    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>ki[i][j];
        }
    }
	for(int i=0;i<n;i++){
		for(int j = 0;j<m;j++){
            if(ki[i][j]!='#'){
               s = s-1;
            }
            if(j==n-1){
                s= s + 1;
            }
            if(ki[i][j]=='.'){
			   s = s - 2;
            }
			if(ki[i][j]=='*'){
				s = s + 5;
			}
			if(ki[i][j]=='#'){
                j = n ;
				continue;
			}
            if(s>=k){
                continue;x
            }
            else{
                break;
            }
		}
		if(s>=k){
            continue;
        }
        else{
            break;
        }
	}
	if(s>=k){
        cout<<"Yes"<<endl;
        cout<<s;
    }
    else{
        cout<<"No";
    }
	return 0;
}
