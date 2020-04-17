#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char A[100];
	cin>>A;
	int i = 0;
	if(A[i]=='9'){
			i++;
		}
	while(A[i]!='\0'){
           int digit = A[i]-'0'; 
       if(digit>=5){
            digit = 9-digit;
       }
       A[i] = digit+'0';
       i++;
	}
	cout<<A<<endl;
	return 0;
}