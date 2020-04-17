#include<bits/stdc++.h>
using namespace std;

int magicsquare(vector<vector<int>> s){

int real[8][3][3]={
    	{{8,1,6},{3,5,7},{4,9,2}},
	    {{6,1,8},{7,5,3},{2,9,4}},
	    {{4,9,2},{3,5,7},{8,1,6}},
	    {{2,9,4},{7,5,3},{6,1,8}},
	    {{8,3,4},{1,5,9},{6,7,2}},
	    {{4,3,8},{9,5,1},{2,7,6}},
	    {{6,7,2},{1,5,9},{8,3,4}},
	    {{2,7,6},{9,5,1},{4,3,8}}
	};
int res , minres = 0;
for(int c=0;c<8;c++){
	res = 0;
   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           res+= abs(s[i][j] -real[c][i][j]); 
       }
   }
 if(c==0) minres = res;
 if(minres>res) minres = res;
}
return minres;
}


int main(int argc, char const *argv[])
{
	vector<vector<int> > v(3,vector<int> 3);
    for(int v_i=0;v_i<3;v_i++){
        for(int v_j=0;v_j<3;v_j++){
        	cin>>v[v_i][v_j];
        }
    }

int result  = magicsquare(v);
cout<<result<<endl;

	return 0;
}