#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[27];
	for(int i=0;i<26;i++){
		cin>>arr[i];
	}

	string s;
	getline(cin,s);

	int width = s.length(),height = 0;

    for(int i=0;i<width;i++){
        int k = s[i];
         
        k -= 97;
        if(height<arr[k])
        height = arr[k];  
       
    }
 cout<<(height*width);
	return 0;
}