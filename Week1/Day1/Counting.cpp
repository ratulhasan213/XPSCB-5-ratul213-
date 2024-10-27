#include<bits/stdc++.h>
using namespace std;
int main(){

int a,b;
cin>>a>>b;
int count = 0;
for (int i = a; i <=b; i++)
{
    if(i>=a && i<=b){
        count++;
    }
}
cout<<count<<"\n";


return 0;

}