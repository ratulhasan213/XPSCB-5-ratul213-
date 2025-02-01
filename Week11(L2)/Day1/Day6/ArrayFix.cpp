//https://codeforces.com/problemset/problem/1948/B
#include<bits/stdc++.h>
using namespace std;

bool canFix(int arr[], int n){

 // 12 3 45 67
   
   int m = arr[n-1];
//    cout<<m<<"\n\n";
   for (int i = n-1; i>=0; i--)
   {
      if(arr[i]<=m){
        m = arr[i];
      }
      else{
        // cout<<m<<"\n\n";
        int x = arr[i];

         vector<int>v;
        while (x)
        {
           v.push_back(x%10);
           x = x/10;
        }

        reverse(v.begin(),v.end());

    //     for(int c: v){
    //         cout<<c<<" ";
    //     }
    //    cout<<"\n";
        int len = v.size();
         
         for (int j = len-1; j>=0; j--)
         {
            // cout<<m<<" "<<v[j]<<"\n";
            if(v[j]<=m){
                m = v[j];
            }
            else{
                return false;
            }
         }
         
        
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

    if(canFix(arr,n)){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    
 }
 

return 0;

}


/*

1
4
12 3 45 67

3
4
12 3 45 67
3
12 28 5
2
0 0



*/