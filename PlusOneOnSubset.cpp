    #include<iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;
    
    void time(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }

    void solve(int n){
        vector<int> v(n);
        for(int &i:v)
         cin>>i;
         
        int mine= *min_element(v.begin(),v.end()); 
        int maxe= *max_element(v.begin(),v.end()); 
        
        cout<<maxe-mine<<"\n";
    }
     
    int main(){
        time();
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            solve(n);
        }
        
        return 0;
    }
