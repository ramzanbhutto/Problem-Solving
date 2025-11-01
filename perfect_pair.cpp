#include<iostream>
using namespace std;
void BestPair(int combined_time, int players[], int separate_time[], int size);
int main()
{
    int combined_time;
    cin>>combined_time;
    int players[5];
    int separate_time[5];
    for(int i=0; i<5; i++)
    {
        cin>>players[i];
    }
 for (int i=0; i<5; i++)
 {
        cin>>separate_time[i];
    }
 BestPair(combined_time, players, separate_time, 5);   //i called function here
    return 0;
}

void BestPair(int combined_time, int players[], int separate_time[], int size)
{
    int high_skill=0, pair_1=0, pair_2=0;
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(separate_time[i] + separate_time[j] == combined_time &&abs(players[i]-players[j])<=50)
            {
                int combined_skill = players[i]+players[j];
                if(combined_skill>high_skill)
                {
                    pair_2 = j;
                    pair_1 = i;
                    high_skill = combined_skill;
                }
              }
             }
       }
    if(high_skill==0)
    cout<<"-1"<<endl;
    else
    {
        cout<<high_skill<<endl;
        cout<<pair_1+1<<" "<<pair_2 + 1<< endl;
        cout<<players[pair_1]<<" "<<players[pair_2]<<" "<<separate_time[pair_1]<<" "<<separate_time[pair_2]<<endl;
    }
}
