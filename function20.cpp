#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
	unordered_map<string,int> umap;
	
    int n;
    int arr[100000];
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>arr[i];
    
    int sorted[100000];

    for (int i=0;i<n;i++)
        sorted[i]=arr[i];

    sort(sorted,sorted+n);
    vector<int> difference;

    for (int i=0;i<n;i++)
        if (sorted[i]!=arr[i])
            difference.push_back(i);
    if (difference.size()==0)
        cout<<"yes"<<endl;  
    else if (difference.size()==2)
        cout<<"yes"<<endl<<"swap "<<difference[0]+1<<" "<<difference[1]+1; 
    else 
    {
        int st = difference[0], ed = difference[difference.size()-1];
        while (st<ed)
        {
            swap(arr[st],arr[ed]);
            st++;
            ed--;
        }
        for (int i=0;i<n;i++)
            if (sorted[i]!=arr[i])
            {
                cout<<"no"<<endl 
                return 0;
            }
         cout<<"yes"<<endl<<"reverse "<<difference[0]+1<<" "<<difference[difference.size()-1]+1; 
    }
    return 0;
}