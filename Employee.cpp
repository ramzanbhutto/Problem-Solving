#include <iostream>
using namespace std;
//int COUNT=0;
class Employee{ 
public:
  string name;
    string place;
    int worktime;
    double *salary_slots;
    double total_salary;

  void Salary()
  {
    for(int i=0;i<worktime;i++)
      total_salary+=salary_slots[i];
  }

  static void Sort(Employee* sal,int total)
   {
     for(int i=0;i<total-1;i++)
      {
        for(int j=0;j<total-i-1;j++)
         {
           if(sal[j].total_salary < sal[j+1].total_salary)
             swap(sal[j] , sal[j+1]);
         }
      }
  }

};
/*
void Co(Employee& e){
  if(e.place=="kashmore")
    COUNT++;
}
*/
int main()
{
   freopen("/home/ramzan/PROGRAMMING/C++/OOP/salary.txt","r",stdin);    
  
  int total;
    cout<<"Enter total number of employee: ";
    cin>>total;

  Employee *data=new Employee[total];
    for(int i=0;i<total;i++)
  {
        cout<<"Enter name of employee "<<i+1<<": ";
        cin>>data[i].name;
        cout<<"Enter location of "<<data[i].name<<": ";
        cin>>data[i].place;
        cout<<"Enter total number of slots for "<<data[i].name<<": ";
        cin>>data[i].worktime;
        
        data[i].salary_slots= new double[data[i].worktime];
        for(int j=0;j<data[i].worktime;j++){
            cout<<"Enter salary for "<<data[i].name<<"'s "<<j+1<<" slot: ";
            cin>>data[i].salary_slots[j];
        }   
  //Co(data[i]);
    data[i].Salary();    
       
  }
//cout<<"Workers from kashmore: "<<COUNT;   
  Employee::Sort(data,total);
   cout<<endl<<"Below mentioned is the total salary in descending order: "<<endl;
   for(int i=0;i<total;i++)
    cout<<data[i].name<<": "<<data[i].total_salary<<endl;



  cout<<endl<<"Employee with highest salary of "<<data[0].total_salary<<" is "<<data[0].name<<endl;
  for(int i=0;i<total;i++)
  {
    delete[] data[i].salary_slots;
    data[i].salary_slots=NULL;
  }
  delete[] data;
  data=NULL;
    
    return 0;
}
