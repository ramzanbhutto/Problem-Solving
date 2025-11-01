#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string reverseWords(string );
int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);

    cout<<"String wit reversed words is: "<<reverseWords(str)<<endl;
    return 0;
}

string reverseWords(string s) {

    reverse(s.begin(),s.end());
    int n=s.length();
    int left=0, right=0, i=0;
    while(i<n)
    {
        while(i<n&&s[i]==' ')
            i++;
        if(i==n)
            break;
        while(i<n && s[i]!=' ')
            s[right++]=s[i++];

        reverse(s.begin()+left, s.begin()+right);
        s[right++]=' ';
        left=right;
        i++;
    }

    s.resize(right-1);
    return s;
}
