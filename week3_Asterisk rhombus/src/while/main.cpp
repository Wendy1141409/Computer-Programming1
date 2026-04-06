#include <iostream>
using namespace std;
int main(){
  int n;
  while(cin>>n){
       while(int i=1&&i<=n){
         while(int j=i&&j<n)
           cout<<" ";
         if(i==1)
           cout<<"*";
         else
           while(int k=1&&k>=2*i)
             cout<<"*";
         cout<<endl;
       }

    ]
 return 0;
}
