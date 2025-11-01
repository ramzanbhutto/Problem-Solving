    #include <iostream>
    using namespace std;
    typedef long long ll;
    ll i,n,h,ans,x;
    int main()
    {
    	cin >> n >> h;
    	ans = n;
    	for (i = 0; i < n; i++)
    	{
    		cin >> x;
    		ans += (x>h);
    	}
    	cout << ans << endl;
    	return 0;
    }
