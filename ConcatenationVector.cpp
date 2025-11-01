#include <iostream>
#include <limits>
#include <vector>
using namespace std;

#define npb nums.push_back
#define vec std::vector<int>

vec getConcatenation(vec& nums);

int main()
{
    int s;
    cout<<"Size: ";
    cin>>s;

    if(cin.fail() || s<= 0)
     {
        cerr<<"Invalid size! Please enter a positive integer."<<endl;
        return -1;
    }
    vec v(s); 
    cout<<"Elements: ";
    for(int i=0; i<s; i++) 
    {
        cin>>v[i];

        if(cin.fail()) 
        {
            cerr<<"Invalid input! Please enter integers only."<<endl;
            return -1;
        }
    }

    // Clear the input buffer to remove any leftover input
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout<<"Vector after concatenation is: ";
    vec temp =getConcatenation(v);
    for (int t:temp)
        cout<<t<<" ";

    cout<<endl;

    return 0;
}

vec getConcatenation(vec& nums)
{
    int originalSize = nums.size();
    for (int i=0; i<originalSize;i++)
        npb(nums[i]);

    return nums;
}
