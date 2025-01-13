//https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D
#include<bits/stdc++.h>
using namespace std;

int LowerBound(int arr[], int n, int left, int right){
    int ans = -1;

    int start = 0;
    int end = n-1;

    while (start<=end)
    {
        int mid = start+(end-start)/2;

        if(arr[mid] ==left)
        {
            ans = mid;
            end = mid-1; //first occ of left
        }
        else if(arr[mid]>left)
        {   
            if(arr[mid]<=right){
               ans = mid;
            }
            end = mid-1;
         
        }
        else{    
             start = mid+1;
        }

    }
    



    return ans;
}




int UpperBound(int arr[], int n, int left, int right){
    int ans = -1;

    int start = 0;
    int end = n-1;


    while (start<=end)
    {
        int mid = start+(end-start)/2;

        if(arr[mid] == right)
        {
            ans = mid;
            start = mid+1; // last occ of right
        }
        else if(arr[mid]>right)
        {   
             end = mid-1;
        }
        else{

            if(arr[mid]>=left){
               ans = mid;
            }
            
           start = mid+1;
           
        }

    }
    



    return ans;
}



int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n;
   cin>>n;
   int arr[n];
   for (int i = 0; i <n; i++)
   {
      cin>>arr[i];
   }

   sort(arr,arr+n);

   int q;
   cin>>q;

   int left , right;
   for (int i = 0; i <q; i++)
   {
      cin>>left>>right;

      int lower = LowerBound(arr,n,left,right);
      int upper = UpperBound(arr,n,left,right);


    //   cout<<lower<<" "<<upper<<"\n";

    if(upper == -1 || lower == -1){
        cout<<"0 ";
    }
    else{
           cout<<upper-lower+1<<" ";
    }

   
      
   }
   


return 0;

}



/*


5
10 1 10 3 4
1
2 9


5
10 1 10 3 4
4
1 10
2 9
3 4
2 2



*/