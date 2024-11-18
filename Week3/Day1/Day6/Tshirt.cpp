//https://codeforces.com/problemset/problem/1741/A
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
       string sh1,sh2;
       cin>>sh1>>sh2;

       int len1 = sh1.size();
       int len2 = sh2.size();
       
       int s1 = 0;
        if(sh1[len1-1]=='L'){
             s1 = 3;
        }
        else if (sh1[len1-1]=='S')
        {
            s1 = 1;
        }
        else{
            s1 = 2;
        }
        

           if(sh1[len1-1]=='L'){
             s1 = 3;
        }
        else if (sh1[len1-1]=='S')
        {
            s1 = 1;
        }
        else{
            s1 = 2;
        }



       int s2 = 0;

        if(sh2[len2-1]=='L'){
             s2 = 3;
        }
        else if (sh2[len2-1]=='S')
        {
            s2 = 1;
        }
        else{
            s2 = 2;
        }



        if(s1>s2){
            cout<<">\n";
        }
        else if(s1<s2){
            cout<<"<\n";
        }
        else{
           
           if(sh1[len1-1]=='L'){
              if(len1>len2){
                 cout<<">\n";
              }
              else if(len1<len2){
                cout<<"<\n";
              }
              else{
                cout<<"=\n";
              }
           }


           if(sh1[len1-1] == 'S'){
              if(len1>len2){
                 cout<<"<\n";
              }
              else if(len1<len2){
                cout<<">\n";
              }
              else{
                cout<<"=\n";
              }
           }


           if(sh1[len1-1]=='M'){
               cout<<"=\n";
           }
        }
        
   }
   

return 0;

}

