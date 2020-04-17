#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[]) {
int tc;
cin>>tc;
while(tc--){
  int n;
  cin>>n;
  std::vector<int> v(n);
  std::vector<int> mod(n);
  int cumulative_sum = 0;
  int result = 0;
  for (int i = 0; i < n; i++) {
      cin>>v[i];
      cumulative_sum+=v[i];
      //DOUBLE MOD BECAUSE NUMBER CAN BE NEGATIVE
      mod[((cumulative_sum%k)+k)%k]++;
  }
  for (int i = 0; i < n; i++) {
     if(mod[i]>1){
       result+= (mod[i]*(mod[i]-1))/2;}
     //where there is no remainder it is automattically divisible
     result+= mod[0];
    }
  cout<<result<<endl;
}
  return 0;
}
