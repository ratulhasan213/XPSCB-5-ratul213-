//https://codeforces.com/problemset/problem/1278/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;


bool allCountSame (map<char,int>& arr, map<char,int>& brr){
         
    for(auto[key,val]: arr){
        if(brr.count(key)){
            if(brr[key]!=val){
                return false;
            } 
        }
        else{
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
     string p,h;
     cin>>p>>h;

     int lenP = p.size();
     int lenH = h.size();


    
     

     if(lenP>lenH){
         cout<<"NO\n";
     }
     else{
       
       map<char,int>arr; 
       for(char ch: p){
          arr[ch]++;
       }
       
       map<char,int>brr;
        bool ans = false; 
        int in = 0;
        while (in<lenP)
        {
            brr[h[in]]++;
            in++;
        }
        

       ans = allCountSame(arr,brr);

       if(!ans){


          int start = 0;

          while(in<lenH){
            
            brr[h[start]]--;
            brr[h[in]]++;
            ans = allCountSame(arr,brr);
            if(ans){
              break;
            }
            in++;
            start++;

          }
         
       }

      
       if(ans){
         cout<<"YES\n";
       }
       else{
        cout<<"NO\n";
       }

      }
   }
   

return 0;

}



/*

5
abacaba
zyxaabcaabkjh
onetwothree
threetwoone
one
zzonneyy
one
none
twenty
ten


*/