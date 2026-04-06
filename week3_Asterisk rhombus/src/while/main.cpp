#include <iostream>
using namespace std;
int main(){
  int n,i=1,j=i,k=1;
  while(cin>>n){
       while(i<=n){
         while(j<n){
           cout<<" ";j++;
         }
         if(i==1)
           cout<<"*";
         else
           while(k<2*i){
             cout<<"*";k++;
           }
         cout<<endl;i++;j=i;k=1;
       }
       i=n-1;
       while(i>=1){
        j=i;
        while(j<n){
            cout<<" ";j++;
        }
        int k=1;
        if(i==1)
          cout<<"*";
        else
          while(k<2*i){
          cout<<"*";k++;}
        cout<<endl;i--;   
       }
  }
 return 0;
}
