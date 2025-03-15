#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int n = 3;

void permute(int arr[], vector<int>& temp, vector<bool>& check, vector<vector<int>>& ans){
   
    if( temp.size() == n){
        ans.push_back(temp);
        return ;
    }

    for (int i = 0; i <n; i++)
    {
        if(!check[i]){
            temp.push_back(arr[i]);
            check[i] = true;

            permute(arr,temp, check, ans);

            temp.pop_back();    // backtracking
            check[i] = false; 
        }
    }
    
    
}

int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int arr[] = {1,2,3};

   vector<vector<int>>ans;
   vector<int>temp;
   vector<bool>check(n,false);
   permute(arr,temp,check,ans);


   for(auto ar: ans){
    for(auto x: ar){
         cout<<x<<" ";
    }
    cout<<"\n";
   }




return 0;

}