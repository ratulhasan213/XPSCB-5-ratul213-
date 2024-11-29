//https://codeforces.com/problemset/problem/1860/A
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

        int len = s.size();

        string a;

        for (int i = 0; i <len*2; i+=2)
        {
            a.push_back('(');
            a.push_back(')');
        }

   

        string b;


        for (int i = 0; i <len; i++)
        {
             b.push_back('(');   
        }

        for (int i = 0; i <len; i++)
        {
            b.push_back(')');
        }



        if(a.find(s)==string::npos){
            cout<<"YES\n";
            cout<<a<<"\n";
        }
        else if(b.find(s)==string::npos){
            cout<<"YES\n";
            cout<<b<<"\n";
        }
        else{
            cout<<"NO\n";
        }
        
   }
   

return 0;

}

/*

1
()



4
)(
(()
()
))()


*/




