#include<iostream>
using namespace std;

void Find_unique(int arr[],int n,int *x,int *y){
	int set_bit_no = 0;
	int Xor = arr[0];
	*x = 0;
	*y = 0;
    for (int i = 1; i < n; i++)
	{
		Xor^=arr[i];
	}
	set_bit_no = Xor & ~(Xor-1); //TO GET THE RIGHTMOST SET BIT   1110 & ~(1101) = 1101 & 0010 = 0010

	for (int i = 0; i < n; i++)
	{
		if(arr[i] & set_bit_no){
			*x ^ = arr[i];
		}
		else{
			*y ^ = arr[i];
		}
	}
cout<<*x<<" "<<*y<<endl;
return;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	int *x = new int [(sizeof(int))];
	int *y = new int [(sizeof(int))];
	Find_unique(arr,n,x,y);
	return 0;
}