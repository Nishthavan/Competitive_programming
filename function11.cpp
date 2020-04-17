#include<iostream>
using namespace std;
int multiply(int x,int res[],int size);

void factorial(int n){

 int res[400];
 int size = 1;
  res[0] = 1;
  for(int i=2;i<=n;i++){
   size = multiply(i, res, size);
  }
  for(int i=size-1;i>=0;i--){
	cout<<res[i];
  }
}

int multiply(int x,int res[],int size){
 
 int carry = 0;
  
 for(int i=0;i<size;i++){
 	int c = res[i]*x + carry;
 	res[i] = c%10;
 	carry = c/10;
 }

while(carry){
	res[size] = carry%10;
	carry = carry/10;
	size++;
}

return size;
}
int main(int argc, char const *argv[])
{   
	factorial(25);
	return 0;
}