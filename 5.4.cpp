#include<iostream>
#include<iomanip>
#include<string>

using namespace std;
 ostream& currency(ostream& os)
    {
        return os <<"$";
    }
int main()
{
   
   string name[] ={"ABC","PQR","XYZ"};
   float marks[]={95,82,88};
   float fees[]= {10500.50,80000.0,77000.56};

   cout<<setfill('-')<<setw(50)<<"-"<<endl;
   cout<<setfill(' ');
   
   cout<<left
   <<setw(15)<<"name"
   <<setw(15)<<"marks"
   <<setw(20)<<"fees"<<endl;
    
   cout<<setfill('-')<<setw(50)<<"-"<<endl;
    cout<<setfill(' ');

   for(int i=0;i<3;i++)
   {
    cout<<left
    <<setw(15)<<name[i]
   <<setw(15)<<fixed<<setprecision(2)<<marks[i]<<currency
   <<setw(20)<<fees[i]<<endl;
   }


    cout<<setfill('-')<<setw(50)<<"-"<<endl;
       return 0;
}