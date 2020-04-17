#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	cin>>T;
	for(int Te = 1; Te <=T; Te++)
	{
        cout<<"Case #"<<Te<<": ";
         string s;
         cin>>s;
         int str_length = s.length();

         int counter = 0;

         for(int i = 0; i <str_length; i++)
         {

         	int pres = s[i] - 48 ;
            int tempn = pres;
            //FOR ZEROES 
            if(pres==0){
            	if(counter){
            		while(counter){
            			cout<<")";
            			counter--;
            		}
            	}
            		cout<<pres;
            }
            ///INITIALLY 
         	else{
         		if(i==0){
         		while(tempn--){
         			cout<<"(";
         			counter++;
         		} 
              cout<<pres;
              continue;
         	}
          /// PRESENT!=0 
         	else {
                   int prev = s[i-1] - 48 ;
                   int diff = prev-tempn;
                
                   if(diff<0){
                      while(diff<0){
                        cout<<"(";
                        counter++;
                      	diff++;
                      }
                  cout<<pres;
                   }
                   else if(diff>0){
                     while(diff--){
                     	cout<<")";
                     	counter--;
                     
                     }
                     cout<<pres;
                   }
                   else{
                       cout<<pres;
                      continue;
                    }
         	}
         }
         }
if(counter){
       while(counter--){
         		cout<<")";
            }
}

cout<<endl;

}
	return 0;
}