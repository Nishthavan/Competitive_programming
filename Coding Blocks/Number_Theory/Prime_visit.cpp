#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int number){
  if(number <=1)
{  return false;}

  if(number<=3)
    {return true;}

  if(number%2 == 0 || number%3==0)
    {return false;}

    for(int i=5;i*i<=number;i+=6)
      {
		  if(number%i==0 || number%(i+2)==0){
        return false;
		}
	  }

  return true;
}

int main(int argc, char const *argv[]) {
  int tt;
  cin>>tt;
  while(tt--){
    int count = 0;
    pair<int,int> pair;
    cin>>pair.first;
    cin>>pair.second;
    for(int i=pair.first;i<pair.second;i++){
      if(isPrime(i)){
        count++;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}
