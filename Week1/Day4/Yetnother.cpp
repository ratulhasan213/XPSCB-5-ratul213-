#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
       string s;
       cin>>s;
       
       map<int,char>mp;

       stack<int>upper;
       stack<int>lower;

       for (int i = 0; i <s.size(); i++)
       {
           if(s[i]=='b'){
              if(!lower.empty()){
                  int index = lower.top();
                  lower.pop();
                  mp[index] = '$';
              }
           }

           else if(s[i]=='B'){
            if(!upper.empty()){
                int index = upper.top();
                upper.pop();
                mp[index] = '$';
            }
           }
           else{
               if(s[i]>='a' && s[i]<='z'){
                lower.push(i);
                mp[i] = s[i];
               }
               else{
                upper.push(i);
                mp[i] = s[i];
               }
           }    
       }


       for(auto[key,val]:mp){
          if(val!='$'){
            cout<<val;
          }
       }
       
   cout<<"\n";
           
           
   }
   

return 0;

}

/*

4
ARaBbbitBaby
YetAnotherBrokenKeyboard
Bubble
Improbable

1
BbBB

12
ARaBbbitBaby
YetAnotherBrokenKeyboard
Bubble
Improbable
abbreviable
BbBB
BusyasaBeeinaBedofBloomingBlossoms
CoDEBARbIES
codeforces
bobebobbes
b
TheBBlackbboard



*/