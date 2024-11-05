//https://codeforces.com/problemset/problem/1703/C
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
        int n;
        cin>>n;
        vector<int>digit(n);
        for (int i = 0; i <n; i++)
        {
            cin>>digit[i];
        }

        int len;
        string s;

         for (int i = 0; i <n; i++)
        {
            cin>>len;
            cin>>s;
            for (int j = 0; j <len; j++)
            {
                if(s[j]=='U'){
                    digit[i]--;
                }
                else{
                    digit[i]++;
                }

                if(digit[i] == 10){
                    digit[i] = 0;
                }

                if(digit[i] == -1){
                    digit[i] = 9;
                }

            }
            
            
        }

        for(int val: digit){
            cout<<val<<" ";
        }

        cout<<"\n";
        

   }
   

return 0;

}