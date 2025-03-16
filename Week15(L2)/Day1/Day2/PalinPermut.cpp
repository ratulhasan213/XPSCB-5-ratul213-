#include<bits/stdc++.h>
#define ll long long int
using namespace std;


bool isPalindrome(string s, int left, int right){
    int start = left;
    int end = right;

    while (start<=end)
    {
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;
    }
    
    return true;
}


void makePermute(string s, vector<string>& temp,vector<vector<string>>& ans, int& totalChar, int start){
   
    if(totalChar == s.size()){
        ans.push_back(temp);
        return;
    }
    
    for (int end = start; end <s.size(); end++)
    {  
         
    
            if(isPalindrome(s,start,end)){
                string t = s.substr(start, end - start + 1);
                temp.push_back(t);
                totalChar+=t.size();


            makePermute(s, temp, ans,totalChar,end+1);

            temp.pop_back();
            totalChar-=t.size();
            }
           

            
        
    }
    

}

int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   string s = "ccdd";

   vector<vector<string>>ans;
   vector<string>temp;
   int totalChar = 0;


   makePermute(s, temp,ans,totalChar,0);


   for(auto ar: ans){
     for(auto x: ar){
        cout<<x<<" ";
     }
     cout<<"\n";
   }



return 0;

}