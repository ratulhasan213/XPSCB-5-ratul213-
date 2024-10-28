#include<bits/stdc++.h>
using namespace std;
int main(){

int test;
cin>>test;
while (test--)
{
    string s;
    int len;
    cin>>len;
    cin>>s;
    int start = 0;
    int end = len-1;
    int needtoWhite = 0;
     
    while (start<end)
    {
        if(s[start]=='W'){
            start++;
        }

        if(s[end]=='W'){
            end--;
        }

        if(s[start]=='B' && s[end]=='B'){
            break;
        }

    }
     
   

    cout<<(end-start+1)<<"\n";
    
}


return 0;

}