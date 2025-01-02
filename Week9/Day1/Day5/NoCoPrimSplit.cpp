//https://codeforces.com/problemset/problem/1872/C
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<=2){
        return true;
    }
     
    for (int i = 2; i*i <=n; i++)
    {
        if(n%i==0){
           
            return false;
            
            
        }
    }

    return true;
    
}
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
      int l,r;
      cin>>l>>r;
      if(l<=3 && r<=3){
        cout<<"-1\n";
      }

    else if(l == r){
         int divisor = -1;
         for (int i = 2; i*i <=l; i++)
         {
             if(l%i==0){
                divisor = i;
                break;

             }
         }

         if(divisor==-1){
            cout<<"-1\n";
         }
         else{
            cout<<divisor<<" "<<(l-divisor)<<"\n";
         }
         
      }
      else if((l%2 == 0 || r%2==0) && (l>3 && r>3)){
         if(l%2==0){
            cout<<l/2<<" "<<l/2<<"\n";
         }
         else{
            cout<<r/2<<" "<<r/2<<"\n";
         }
      }
      else{
             int div = -1;
             int num = -1;
        for (int i = l; i <=r; i++)
        {     
        //    cout<<"n"<<i<<"\n";
            if(isPrime(i) == false){
                // cout<<i<<"\n";
             
              for (int j = 2; j*j <=i; j++)
              {
                 if(i%j==0){
                    div = j;
                    num = i;
                    break;
                 }
              }
              
            }

            if(div!=-1){
                break;
            }
        }

        if(div==-1){
            //all prime
             cout<<"-1\n";
        }
        else{
           cout<<div<<" "<<num-div<<"\n";
        }
        
      }
   }
   

return 0;

}

/*



1
1 3



11
11 15
1 3
18 19
41 43
777 777
8000000 10000000
2000 2023
1791791 1791791
1 4
2 3
9840769 9840769


*/