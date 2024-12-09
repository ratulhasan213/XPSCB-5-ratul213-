//https://www.codechef.com/practice/course/5-star-and-above-problems/DIFF2500/problems/PALIXOR
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const  int c = (1LL<<15)-1;
vector<int>v;

bool isPalindrome(int x){
    string s = to_string(x);

    int start = 0;
    int end = s.size()-1;

  while ( start < end)
  {
        if(s[start]!=s[end]){
            return false;
        }     

        start++;
        end--;
  }
  
    return true;
     
    
}

void getAllpalindrome(){
  
  for (int i = 0; i <=c; i++)
  {
     if(isPalindrome(i)){
        v.push_back(i);
     }
  }
  
}
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

 getAllpalindrome();


   int test;
   cin>>test;
   while (test--)
   {
       int n;
       cin>>n;
       vector<int>arr(n);
       vector<int>cnt(c+1);
       for (int i = 0; i <n; i++)
       {
            cin>>arr[i];
            cnt[arr[i]]++;
       }

       ll ans = n;

        

       
           for (int i = 0; i<n; i++)
           {
               for(int val: v){
                int temp = val^arr[i];
                 ans+=cnt[temp];

               }
           }
           
       

       cout<<ans/2<<"\n";

   
       
   }
   

return 0;

}

/*


1
4
13 27 12 26

2
4
13 27 12 26
3
2 2 2


*/