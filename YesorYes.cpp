#include <cctype>
#include<iostream>
using namespace std;
#define endl "\n"
int main()
{
    int x; cin>>x;
    while(x--){
        string s;
        cin>>s;
        if(tolower(s[0])=='y'&& tolower(s[1])=='e' &&tolower(s[2])=='s')
           cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;   
        
    }

           return 0;
}
