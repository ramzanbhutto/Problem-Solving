#include<iostream>
using namespace std;
void classifyEmergency(int[],int);
void prioritizeResponse(string[],int[],int[],int);
void simulateResponse(int[],int,int,int);
void generateReport(string[],int[],int[],int);
int main()
{
  int N,M;
  cin>>N>>M;
  int tt=N*M;
  string emergencyType[tt];
  int severity[tt];
  int responseTime[tt];
  for(int i=0;i<tt;i++)
  {
    cin>>emergencyType[i]>>severity[i]>>responseTime[i];
  }
  for(int i=0;i<tt;i++)
  {
    cout<<emergencyType[i]<<" "<<severity[i]<<" "<<responseTime[i]<<endl;
  }
   
  cout<<"\nClassifications: "<<endl;
  classifyEmergency(severity,tt);
  cout<<endl; 

  cout<<"Top 3 Emergencies: "<<endl;
  prioritizeResponse(emergencyType, severity, responseTime, tt);
  cout<<endl;
  
  cout<<"Total Response Time per city: "<<endl;
  simulateResponse(responseTime, N,M,tt);
  cout<<endl;
  
  cout<<"Emergency Report (Severity Desc):"<<endl;
  generateReport(emergencyType, severity, responseTime, tt);
  cout<<endl;
  return 0;
}

void classifyEmergency(int s[],int t)
{
int countCritical=0;
int countModerate=0;
int countLow=0;
  for(int i=0;i<t;i++)
  {
    if(s[i]>=8) countCritical++;
    else if(s[i]>=5) countModerate++;
    else countLow++;
  }
  cout<<"Critical: "<<countCritical<<endl;
  cout<<"Moderate: "<<countModerate<<endl;
  cout<<"Low: "<<countLow<<endl;
}

void prioritizeResponse(string e[],int s[],int r[],int t)
{
  int maxIndex1=0,maxIndex2=0,maxIndex3=0;
  for(int i=1;i<t;i++)
  {
    if(s[i]>s[maxIndex1])
    {
      maxIndex1=i;
    }
  }
  for(int i=1;i<t;i++)
  {
    if(s[i]>s[maxIndex2] && i!=maxIndex1)
    {
      maxIndex2=i;
    }
  }
  for(int i=1;i<t;i++)
  {
    if(s[i]>s[maxIndex3] && i!=maxIndex1 && i!=maxIndex2)
    {
      maxIndex3=i;
    }
  }
  cout<<e[maxIndex1]<<" "<<s[maxIndex1]<<" "<<r[maxIndex1]<<endl;
  cout<<e[maxIndex2]<<" "<<s[maxIndex2]<<" "<<r[maxIndex2]<<endl;
  cout<<e[maxIndex3]<<" "<<s[maxIndex3]<<" "<<r[maxIndex3]<<endl;
}

void simulateResponse(int r[],int n,int m,int t)
{
  int totalResponseTime[n];
  for(int i=0;i<n;i++)
  {
    totalResponseTime[i]=0;
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      int index=i*m + j;
      totalResponseTime[i]+=r[index];
    }
  }
  for(int i=0;i<n;i++)
  {
    cout<<"City "<<i+1<<": "<<totalResponseTime[i]<<" minutes"<<endl;
  }
}

void generateReport(string e[],int s[],int r[],int t)
{
  for(int i=0;i<t-1;i++)
  {
    for(int j=i+1;j<t;j++)
    {
      if(s[i]<s[j])
      {
        swap(s[i],s[j]);
        swap(e[i],e[j]);
        swap(r[i],r[j]);
      }
    }
  }
  for(int i=0;i<t;i++)
  {
    cout<<e[i]<<" "<<s[i]<<" "<<r[i]<<endl;
  }
}
