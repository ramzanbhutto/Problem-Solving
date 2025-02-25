#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,p;
        cin>>n>>k>>p;
        if(k==0){
          cout<<0<<endl;
            continue;
        }
    int abs_k =abs(k);
        int m=(abs_k+p-1)/p;
        if(m>n)
            cout<<-1<<endl;
        else 
            cout<<m<<endl;
    }
    return 0;
}
