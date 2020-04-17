#include<iostream>
#include<cmath>
using namespace std;

int quadratic(int a,int b,int c){
	return (b*b)-4ac;
}
int main(int argc, char const *argv[])
{
	int a,b,c;
	cin>>a>>b>>c;
   int k = quadratic(a,b,c);
   if(k<0){
   	cout<<"Imaginary";
   	return 0;
   }
else {
	int root1 = (-b + sqrt(k))/2a;
	int root2 = (-b - sqrt(k))/2a;

	if(root1 == root2){
		cout<<"Real and Equal"<<endl;
		cout<<root1<<" "<<root2;
	}

	else {
		cout<<"Real and Distinct"<<endl;
		if(root1>root2){
		cout<<root2<<" "<<root1;
	   }
	else{
		cout<<root1<<" "<<root2;
	   }
	}
}

}