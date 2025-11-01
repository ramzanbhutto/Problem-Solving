#include<iostream>
#include<string>
using namespace std;
int DnaPattern(string);
int main()
{
    string dna;
    cin>>dna;
    cout<<DnaPattern(dna);
    return 0;
}
int DnaPattern(string dna)
{
    int maxCount=0;
    int crntCount=1;
    int length= dna.length();
    for(int i=1; i<length; i++)
    {
        if (dna[i]==dna[i-1])
            crntCount++;
        else
        {
            if(maxCount<crntCount)
                maxCount= crntCount;

            crntCount=1;
        }
    }
    if(crntCount>maxCount)
        maxCount= crntCount;

    return maxCount;
}
