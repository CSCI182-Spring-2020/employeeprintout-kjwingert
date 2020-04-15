#include <iostream>

using namespace std;

enum {Manager, Employee, Volunteer};

struct Address
{
    string City;
    string State;
};

struct Employee1
{
    string Name;
    int DivisionNo;
    Address address;
};

int main()
{
    Employee1 emp;
    emp.Name = "Landon, ";
    emp.DivisionNo = 3;
    emp.address.City = "Yorbalinda, ";
    emp.address.State = "California";

    cout << emp.Name << emp.DivisionNo << ", " << emp.address.City << emp.address.State << endl;
}
