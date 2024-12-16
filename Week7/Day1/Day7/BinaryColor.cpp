//https://codeforces.com/problemset/problem/1977/B?__cf_chl_tk=HRabXws5dhqKISdxIf9oUGR7NiCd9Kp.KRe5GB44wrs-1734330751-1.0.1.1-SOulr1R6H3zBrCklCqXHSn7CT5B0JoPAdLC_F.r_b_8
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

  int l = __lg(n);
  string s;
 for (int i = l; i>=0; i--)
 {
    bool ok = (1<<i) & n;

    if(ok){
      s.push_back('1');
    }
    else{
        s.push_back('0');
    }
 }
  
   int len = s.size();
   
   int indx = len-1;
   while (indx>0)
   {
       if(s[indx] == '0'){
           indx--;
           continue;
       }
       else{
          if(s[indx-1] == '0'){
             indx--;
             continue;
          }
          else{

            s[indx] = '$';
            indx--;
             while (indx>=0)
             {
                if(s[indx] == '1'){
                    s[indx] = '0';
                }
                else{
                    s[indx] = '1';
                    break;
                }
                indx--;
             }

             continue;
             
          }
       }
   }


   if(s[0] == '0'){
    s = "1"+s;
    len++;
   }
    
      cout<<len<<"\n";

   for(int i = len-1; i>=0; i--){

    char ch = s[i];
    if(ch == '$'){
        cout<<"-1 ";
    }
    else{
      cout<<ch<<" ";
    }
   }

   cout<<"\n";
   
 }

return 0;

}


/*

7
1
14
24
15
27
11
19



*/