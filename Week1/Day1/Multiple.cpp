#include<bits/stdc++.h>
using namespace std;
int main(){

int a,b,c;
cin>>a>>b>>c;
int i;
for (i= a; i <=b; i++)
{
    if(i%c==0){
        cout<<i<<"\n";
        break;
    }
}

if(i>b){
   cout<<-1<<"\n";
}


return 0;

}