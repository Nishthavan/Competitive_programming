#include<iostream>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
	int n1,n2;
	char a;
	do{
		cin>>a;
        switch(a){
        	case '+':
        	cin>>n1>>n2;
        	cout<<(n1+n2)<<endl;
        	break;
        	case '-':
            cin>>n1>>n2;
        	cout<<(n1-n2)<<endl;
        	break;
        	case '*':
        	cin>>n1>>n2;
        	cout<<(n1*n2)<<endl;
        	break;
        	case '/':
        	cin>>n1>>n2;
        	cout<<(n1/n2)<<endl;
        	break;
        	case '%':
        	cin>>n1>>n2;
        	cout<<(n1%n2)<<endl;
        	break;
            case 'X':
            break;
            case 'x':
            break;
        	default: cout<<"Invalid operation. Try again."<<endl;
            break;
        }
	}while(a!='X' || a!='x');
	return 0;
}