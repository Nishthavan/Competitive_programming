#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
	char ch;
	cin>>ch;
    
		if(ch>='A' && ch <='Z'){
         cout<<"U";
		}
		else if(ch>='a' && ch <='z'){
			cout<<"L";
		}
		else{
			cout<<"I";
		}
	return 0;
}