#include <iostream>
using namespace std;
class employee
{
    int salary;
    int id;
    public:
    void setdata(void){
        cout<<"enter the id and the salary of the employee"<<endl;
        cin>>id>>salary;
    }
    void showdata(){

        cout<<"The ID of the employee is "<<id<<" salary of the employee is "<<salary<<endl;
    }
};
int main() 
{
    int n;
    cout<<"how many employee are there : ";
    cin>>n;
    employee meta[n];
    for(int i = 0; i<n; i++){
        meta[i].setdata();
    }
    for(int i = 0; i<n; i++){
        meta[i].showdata();
    }
    return 0;
}
