#include<iostream>
using namespace std;
 class Employee
{
    public:
    int id;
    string name;
    float salary;
    Employee(int i,string n,float s)
    {
        id=i;
        name=n;
        salary=s;
    }
void display(){
    cout<<id<<" "<<name<<" "<<salary<<endl;
}
};
int main(){
    Employee e1=Employee(101,"sonoo",890000);
    Employee e2=Employee(102,"nakul",590000);
    e1.display();
    e2.display();
    return 0;
}