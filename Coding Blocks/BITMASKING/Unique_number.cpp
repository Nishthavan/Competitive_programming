#include <iostream>
using namespace std;
int main() {
    int n;
    int ans = 0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
       ans^=arr[i];
    }
    cout<<ans;
}
