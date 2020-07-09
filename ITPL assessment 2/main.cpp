#include <iostream>

using namespace std;

void calculatePartTimeSalary()
{
string name, surname, answer;
double salary, overtime, hoursWorked;
    cout << "Enter employee name then surname?" << endl;
    cin >> name >> surname;
    cout << "How many hours did they work?" << endl;
    cin >> hoursWorked;
    cout << "How many hours did your employee work overtime?" << endl;
    cin >> overtime;
    hoursWorked = hoursWorked - overtime;
    hoursWorked = hoursWorked * 300;
    overtime = overtime * 600;
    salary = hoursWorked + overtime;
    cout << name << " " << surname << "'s total salary is R" << salary << endl;
}
int main()
{
string answer;
cout << "Do you want to enter employee details 'yes' or 'no'" << endl;
cin >> answer;
do while (answer == "yes"){
    calculatePartTimeSalary();
    cout << "if you want to enter another employee answer 'yes'" << endl;
    cin >> answer;
}while (answer == "yes");

    return 0;
}


