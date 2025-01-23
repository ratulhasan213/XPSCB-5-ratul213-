//https://codeforces.com/problemset/problem/1427/A
#include<bits/stdc++.h>
using namespace std;

bool checkForward(int arr[] , int n){

    int sum = 0;
    for (int i = 0; i <n; i++)
    {
        sum+=arr[i];
        if(sum == 0){
            return false;
        }
    }

    return true;
    
}


bool checkBackward(int arr[] , int n){

    int sum = 0;
    for (int i = n-1; i>=0; i--)
    {
        sum+=arr[i];
        if(sum == 0){
            return false;
        }
    }

    return true;
    
}

int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
      int n;
      cin>>n;
      int arr[n];

      for (int i = 0; i <n; i++)
      {
          cin>>arr[i];
      }


      sort(arr,arr+n);

      if(checkForward(arr,n)){
        cout<<"YES\n";
        for (int i = 0; i <n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        
      }
      else if (checkBackward(arr,n)){
          cout<<"YES\n";
          for (int i = n-1; i>=0 ; i--)
          {
            cout<<arr[i]<<" ";
          }
          cout<<"\n";
          
      }
      else{
        cout<<"NO\n";
      }
      
   }
   

return 0;

}



/*


4
4
1 -2 3 -4
3
0 0 0
5
1 -1 1 -1 1
6
40 -31 -9 0 13 -40



*/