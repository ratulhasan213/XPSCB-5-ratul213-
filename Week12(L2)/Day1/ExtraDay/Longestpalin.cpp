//https://codeforces.com/problemset/problem/1304/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void operation(vector<string>& arr, map<string,bool> & cnt, string s, int m){
   
   for(string x: arr){
      int j = m-1;
      bool matchFound = true;

      for (int i = 0; i<m; i++)
      {
         if(x[i]!=s[j]){
            matchFound = false;
            break;
         }
         j--;
      }

      if(matchFound){
         cnt[s] = true;
         return;
      }
      
   }
 
   
   cnt[s] = false;

}


void addPalindrome(string s, map<string,int>& mid){
    
   int start = 0;
   int end = s.size()-1;
   bool p = true;
   while (start<=end)
   {
      if(s[start]!=s[end]){
         p = false;
         break;
      }
      start++;
      end--;
   }

   if(p){
      mid[s]++;
   }
   
}

int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


  
      int n,m;
      cin>>n>>m;
      vector<string>arr;
      string s;
      map<string,bool>cnt;
      map<string,int>mid;

      for (int i = 0; i <n; i++)
      {
         cin>>s;
         //mid calculation:

        
         addPalindrome(s,mid);

         if(i == 0){
           cnt[s] = false;
         }
         else{
            operation(arr,cnt,s,m);
         }
         arr.push_back(s);
      }
      

      vector<string>first,last;
      int len = 0;
         
      for(auto[key,val]: cnt){
          if(val){
            first.push_back(key);
            string rev = key;
            reverse(rev.begin(),rev.end());
            last.insert(last.begin(),rev);
            len+=(2*m);
          }
      }

      string middle;
      int o = 0;

      for(auto[key,occ]: mid){
          if(occ>o){
            o = occ;
            middle = key;
          }
      }
      
      len+=(o*middle.size());

      cout<<len<<"\n";
      
     for(string f: first){
       cout<<f;
     }
     for(int i = 0; i<o; i++){
       cout<<middle;
     }
     for(string l: last){
       cout<<l;
     }

     cout<<"\n";

return 0;

}


/*


4 2
oo
ox
xo
xx


3 3
tab
one
bat



3 5
hello
codef
orces


9 4
abab
baba
abcd
bcde
cdef
defg
wxyz
zyxw
ijji



*/