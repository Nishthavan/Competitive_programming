#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 
  
void countSort(vector <int>& arr) 
{ 
    //max element
    int max = *max_element(arr.begin(), arr.end()); 
    //min element
    int min = *min_element(arr.begin(), arr.end()); 
    //range
    int range = max - min + 1; 
      
    vector<int> count(range), output(arr.size()); 
    for(int i = 0; i < arr.size(); i++) 
        count[arr[i]-min]++; 
          
    for(int i = 1; i < range; i++) 
           count[i] += count[i-1]; 
    
    for(int i = arr.size()-1; i >= 0; i--) 
    {  
         output[ count[arr[i]-min] -1 ] = arr[i];  
              count[arr[i]-min]--;  
    } 
      
    for(int i=0; i < arr.size(); i++) 
            arr[i] = output[i]; 
} 
  
void printArray(vector <int> & arr)  
{  
    for (int i=0; i < arr.size(); i++)  
        cout << arr[i] << " ";  
    cout << "\n";  
} 
  
int main() 
{ 
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    countSort (arr); 
    printArray (arr); 
    return 0; 
} 