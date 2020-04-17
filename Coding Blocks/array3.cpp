#include<iostream>
#include <unordered_map>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,sum,compliment=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
         cin>>arr[i];
	}
    cin>>sum;
    unordered_map<int ,int> umap ;

    for (int i = 0; i < n; i++)
    {
    	umap.insert(make_pair(i,arr[i]));
    }
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {      
       compliment = sum - arr[i];
       if(umap.find(compliment)==umap.end()){
       	continue;
       }
       else{
           if(compliment==0){
               continue;
           }
       	cout<<arr[i]<<" and "<<compliment<<endl;
           umap.erase(arr[i]);
       }
    }
	return 0;
}