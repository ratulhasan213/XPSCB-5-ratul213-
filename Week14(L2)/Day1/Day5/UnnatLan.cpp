//https://codeforces.com/problemset/problem/1915/D
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool isVowel(char ch){
  return ch == 'a' || ch == 'e';
}


bool isCon(char ch){
    return ch!='a' && ch!='e';
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
      string s;
      cin>>s;
      vector<string>arr;

      int i = 0;
      string temp;
      while (i<n)
      {
         if(temp.empty()){
            temp.push_back(s[i]);
            i++;
            continue;
         }
         
         if(isCon(s[i-1]) && isVowel(s[i])){
             temp.push_back(s[i]);
             arr.push_back(temp);
             temp.clear();
         }
         else{
            string now = arr.back();
            arr.pop_back();
            now.push_back(temp[0]);
            arr.push_back(now);
            temp.clear();
            temp.push_back(s[i]);

         }
         
         i++;
      

      }

      if(!temp.empty() && isCon(temp[0])){
         string now = arr.back();
         arr.pop_back();
         now.push_back(temp[0]);
         arr.push_back(now);
      }


      int len = arr.size();
      for (int i = 0; i <len; i++)
      {
        if(i == len-1){
            cout<<arr[i];
        }
        else{
            cout<<arr[i]<<".";
        }
        
      }

      cout<<"\n";
      
      

   }
   

return 0;

}



/*

1
22
dababbabababbabbababba

6
8
bacedbab
4
baba
13
daddecabeddad
3
dac
6
dacdac
22
dababbabababbabbababba



*/