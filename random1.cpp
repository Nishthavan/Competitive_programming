#include <iostream>
#define F for(int i=0;i<n;i++)
#define Fi for(int i=1;i<10000;i++)
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    int freq[10000] = {0};
    F{
      cin>>arr[i];
      if(arr[i]<0){
          freq[arr[i]+1000]++;
      }
      else{
      freq[arr[i]]++;
      }
    }
    Fi{
        if(freq[i]==0){
            cout<<i<<endl;
            break;
        }
    }
}
