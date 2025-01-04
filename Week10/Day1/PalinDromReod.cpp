//https://cses.fi/problemset/task/1755/
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


  
   string s;
   cin>>s;
    int n = s.size();
   map<char,int>cnt;
   for (int i = 0; i <n; i++)
   {
      char ch = s[i];
      cnt[ch]++;
   }

  int odd = 0;
  char c;
  for(auto[key,val]: cnt){
      if(val%2==1){
        odd++;
        c = key;
      }
  }

  if(n%2==0){
       
       if(odd>0){
         cout<<"NO SOLUTION\n";
       }
       else{
        deque<char>ans;

        int occ = cnt[s[0]];
        while (occ--)
        {
            ans.push_back(s[0]);
        }
        

        for(auto[key,val]:cnt){

            if(key!=s[0]){
                bool back = true;

                while (val--)
                {
                    if(back){
                        ans.push_back(key);
                    } 
                    else{
                        ans.push_front(key);
                    }
                    back = !back;
                 
                }
                
            }
        }
            for(auto x: ans){
            cout<<x;
            }
        
       }
  }
  else{
    if(odd>1){
        cout<<"NO SOLUTION\n";
    }
    else{

        deque<char>ans;
         int occ = cnt[c];
         while (occ--)
         {
            ans.push_back(c);
         }
         
          for(auto[key,val]: cnt){
               if(key!=c){

                 bool back = true;
                  while (val--)
                  {
                    if(back){
                       ans.push_back(key);
                    }
                    else{
                        ans.push_front(key);
                    }
                   
                    back = !back;
                  }
                  
               }
          }

         
        for(auto x: ans){
            cout<<x;
        }
        
         
    }

    cout<<"\n";
  }
   

return 0;

}