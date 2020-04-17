#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[2001];
    arr[0] = 1;
     int size = 1;
     int carry = 0;
    for(int i=1;i<=n;i++){
           for(int j=0;j<size;j++){
           	int x = arr[j]*i+carry;
           	arr[j] = x%10;
           	carry = x/10;
           }
           while(carry){
                 arr[size] = carry%10;
                 carry/=10;
                 size++;
           }
    }
    for (int i = size-1; i >= 0; i--)
     {
        cout<<arr[i];
     }
return 0;
}