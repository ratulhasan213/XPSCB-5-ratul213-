//https://codeforces.com/problemset/problem/1839/C
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
    char s[n];
      for (int i = 0; i <n; i++)
      {
        cin>>s[i];
      }

      if(s[n-1]=='1'){
        cout<<"NO\n";
      }
      else{

         vector<int>zero;
      vector<int>one;

      int indx = n-1;
      while (indx>=0)
      {
        int zr = 0;
        int on = 0;
        if(s[indx]=='0'){
           while (indx>=0 && s[indx]=='0')
           {
               zr++;
               indx--;
           }
           zero.push_back(zr);
           
        }
        else{

            while (indx>=0 && s[indx]=='1')
            {
                on++;
                indx--;
            }
            one.push_back(on);
            
        }
         
      }

    

    int i = 0;
    int j = 0;
    vector<string>ans;
    

    while (i<zero.size() && j<one.size())
    {
        int zr = zero[i];
        int on = one[j];
        int t = on;

        while (on>0)
        {
            ans.push_back("0");
            on--;
        }

        while (zr-1>0)
        {
          ans.push_back("0");
          zr--;
        }


        ans.push_back(to_string(t));
        i++;
        j++;
        
    }

    while (i<zero.size())
    {
          int zr = zero[i];
          while (zr>0)
        {
          ans.push_back("0");
          zr--;
        }
        i++;
    }
    

    cout<<"YES\n";
    for(auto a: ans){
        cout<<a<<" ";
    }

    cout<<"\n";

      }
     
    
    


      
   }
   

return 0;

}

/*



4
5
1 1 0 0 0
1
1
3
0 1 1
6
1 0 0 1 1 0


1
7
11001000100


*/