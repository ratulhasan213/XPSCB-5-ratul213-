#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int n;



void makeSum(int arr[], vector<int>& temp, vector<vector<int>>& ans, int sum, int indx, int target){

    if(sum == target){
        ans.push_back(temp);
        return;
    }

    if(indx == n){
      return;
    }

   

   for (int i = indx; i<n; i++)
   {
      if(i>indx && arr[i] == arr[i-1]){
        continue;
      }

      if(sum+arr[i]<=target){
         temp.push_back(arr[i]);
         makeSum(arr,temp,ans,sum+arr[i],i+1,target);
         temp.pop_back();
      }
     
   }
   
    

    
    
}


int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


//    int arr[] = {10,1,2,7,6,1,5};

  int arr[] = {2,5,2,1,2};
   int target = 5;
   n = sizeof(arr)/sizeof(arr[0]);

   vector<int>temp;
   vector<vector<int>>ans;
   sort(arr,arr+n);
   makeSum(arr,temp,ans,0,0,target);

   for(auto arr: ans){
    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<"\n";
   }


return 0;

}


/*


1 7 
1 6 1 
2 6 
1 2 5


*/