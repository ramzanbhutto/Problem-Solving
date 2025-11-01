#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int myAtoi(string );
int main()
{
  string str;
  cout<<"Enter a string: ";
  cin>>str;
  cout<<"The converted string to integer using atoi is: "<<myAtoi(str)<<endl;
  return 0;
}

int myAtoi(string s){
   /* Method 1 */
       long res=0;
       vector<char> numStack;
       char signStack='+';
       bool digitStarted=false; 
       bool signSeen=false;

       for(int i=0;i<s.length();i++){
        if(s[i]==' ')  {
            if(digitStarted) break;
             continue; }
        if(s[i]=='-' || s[i]=='+')  {
            if(digitStarted || signSeen) break;
            signStack= s[i];
            signSeen= true;
            if(i+1>s.length() || s[i+1]<'0' || s[i+1]>'9') return 0;
            continue;
        }
        if(s[i]<'0' || s[i]>'9')  break;
        if(s[i]>='0' && s[i]<='9') {
          numStack.push_back(s[i]);
          digitStarted=true;
        }
       }

       for(int i=0;i<numStack.size();i++){
        res= res*10 + int(numStack[i]-'0');
        //Handling overflow
        if(signStack=='-' && res>(long)INT_MAX+1) return INT_MIN;
        if(signStack=='+' && res>(long)INT_MAX)   return INT_MAX;
       }
        
        if(signStack=='-') res*=-1;
        if(res>INT_MAX) return INT_MAX;
        if(res<INT_MIN) return INT_MIN;

       return (int)res;

    /* Method 2 */ 
  /* 
    
    long res=0;

       char signStack='+';
       bool digitStarted=false; 
       bool signSeen=false;

       for(int i=0;i<s.length();i++){
        if(s[i]==' ')  {
            if(digitStarted) break;
             continue; }
        if(s[i]=='-' || s[i]=='+')  {
            if(digitStarted || signSeen) break;
            signStack= s[i];
            signSeen= true;
            if(i+1>s.length() || s[i+1]<'0' || s[i+1]>'9') return 0;
            continue;
        }
        if(s[i]<'0' || s[i]>'9')  break;
        if(s[i]>='0' && s[i]<='9') {
        res= res*10 + int(s[i]-'0'); //direct
        //Handling overflow
        if(signStack=='-' && res>(long)INT_MAX+1) return INT_MIN;
        if(signStack=='+' && res>(long)INT_MAX)   return INT_MAX;
          digitStarted=true;
        }

       }

        
        if(signStack=='-') res*=-1;
        if(res>INT_MAX) return INT_MAX;
        if(res<INT_MIN) return INT_MIN;

       return (int)res;

  */
}
