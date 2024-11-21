//https://codeforces.com/problemset/problem/1729/C
#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<char,int>a , pair<char,int>b){
    return a.first<b.first;
}


bool cmp2(pair<char,int>a , pair<char,int>b){
    return a.first>b.first;
}

int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
       string s;
       cin>>s;
       int n = s.size();

       char first = s.front();
       char last = s.back();
       
       vector<pair<char,int>>v;
          

          if(first<last){

               for (int i = 1; i <n-1; i++)
              {
                if(s[i]>=first && s[i]<=last){
                    v.push_back({s[i],i+1});
                   }
               }

          }
          else{
                   for (int i = 1; i <n-1; i++)
                 {
                     if(s[i]<=first && s[i]>=last){
                        v.push_back({s[i],i+1});
                       }
                 }
            }
 



       int cost = 0;
       int step = 1;

       if(v.size()==0){

         
         cost+= abs(first-last);
         step++;
         cout<<cost<<" "<<step<<"\n";
         cout<<"1"<<" "<<n<<"\n";
       }
       else{

          if(first<last){

            sort(v.begin(),v.end(),cmp);
            v.push_back({last,n});

            vector<int>path;
            path.push_back(1);
            path.push_back(v[0].second);

            cost+=abs(first-v[0].first);
            step++;
            int len = v.size();

            if(first<last){
                for (int i = 1; i <len; i++)
            {
                  step++;
                  cost+=abs(v[i].first-v[i-1].first);
                  path.push_back(v[i].second);
               }
            }

            


            cout<<cost<<" "<<step<<"\n";
            for(int x: path){
                cout<<x<<" ";
            }

            cout<<"\n";
            

          }
          else{
          
           sort(v.begin(),v.end(),cmp2);
            v.push_back({last,n});

            vector<int>path;
            path.push_back(1);
            path.push_back(v[0].second);

            cost+=abs(first-v[0].first);
            step++;
            int len = v.size();

            for (int i = 1; i <len; i++)
            {
                  step++;
                  cost+=abs(v[i].first-v[i-1].first);
                  path.push_back(v[i].second);
            }

                  cout<<cost<<" "<<step<<"\n";
                   for(int x: path){
                     cout<<x<<" ";
                    }

                 cout<<"\n";

          }

        


       }

       
       
       

   }
   

return 0;

}
