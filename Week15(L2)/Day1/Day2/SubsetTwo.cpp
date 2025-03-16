#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int n;

void makeSubset(int arr[], vector<int>& temp,  vector<vector<int>>& ans, int indx){
    
  if(indx == n){
    ans.push_back(temp);
    return;
  }


  //take:
  temp.push_back(arr[indx]);
  makeSubset(arr,temp,ans,indx+1);

  while (indx+1<n && arr[indx] == arr[indx+1])
  {
    indx++;
  }
  
  temp.pop_back();
 
  //notake
  makeSubset(arr,temp,ans,indx+1);


}
 

int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 



  int arr[] = {1,2,2};
  n = sizeof(arr)/sizeof(arr[0]);
   vector<vector<int>>ans;
   vector<int>temp;

  //  ans.push_back(temp);
   sort(arr,arr+n);
   makeSubset(arr,temp,ans,0);


   for(auto arr: ans){
     for(auto x: arr){
         cout<<x<<" ";
     }
     cout<<"\n";
   }



return 0;

}


/*



   int arr[] = {4,4,4,1,4};

ans = [[],[1],[1,4],[1,4,4],[1,4,4,4],[1,4,4,4,4],[4],[4,4],[4,4,4],[4,4,4,4]]



*/