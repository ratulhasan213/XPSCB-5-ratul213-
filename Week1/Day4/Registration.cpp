#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n;
   cin>>n;
   map<string,int>hashMap;
   while (n--)
   {
       string s;
       cin>>s;
       if(hashMap.find(s)==hashMap.end()){
          hashMap[s]++;
          cout<<"OK\n";
       }
       else{
            int number = hashMap[s];
            cout<<s<<number<<"\n";
            hashMap[s]++;
       }

   }
   

return 0;

}
/*

4
abacaba
acaba
abacaba
acab


*/