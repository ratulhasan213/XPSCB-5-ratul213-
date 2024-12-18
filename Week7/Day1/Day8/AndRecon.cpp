#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
  int tt;
  cin>>tt;
  while(tt--){
      int n;
      cin>>n;
      int b[n-1];
      int a[n]={0};
      for(int i=0;i<n-1;i++){
          cin>>b[i];
      }
      a[0] = b[0];
      a[n-1] = b[n-2];
       for(int i=1;i<n-1;i++){
          a[i] = b[i] | b[i-1];
      }
      
      //verify:
      bool isValid = true;
      for(int i=0;i<n-1;i++){
         int temp = a[i] & a[i+1];
         if(temp!=b[i]){
             isValid = false;
             break;
         }
      }
      
      if(isValid){
        for(int i=0;i<n;i++){
              cout<<a[i]<<" ";
           }
       cout<<"\n";
      }
      else{
          cout<<"-1\n";
      }
      
       
      
  }

    return 0;
}