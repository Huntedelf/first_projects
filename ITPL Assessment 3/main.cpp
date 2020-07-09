#include <iostream>
#include <fstream>
using namespace std;

void calculateNetSalary()
{
string name, surname, answer;
double grossSalary, netSalary, tax, UIF;
    cout << "Enter employee name then surname?" << endl;
    cin >> name >> surname;
    cout << "What is the Gross salary ?" << endl;
    cin >> grossSalary;
    tax = grossSalary * 0.12;
    UIF = 148.72;
    netSalary = grossSalary - (tax + UIF);
    cout << name << " " << surname << "'s total salary is R" << netSalary << endl;
 fstream employeeSalary;
    std::ofstream employeeSalary;
    employeeSalary.open("employeeSalary.txt", std::ios_base::app);
    employeeSalary << name << " " << surname << "'s total salary is R" << netSalary << endl;
    employeeSalary.close ();
}

int main()
{
string answer;
cout << "Do you want to calculate the net salary? 'yes' or 'no'" << endl;
cin >> answer;
while (answer == "yes"){
    calculateNetSalary();
    cout << "if you want to enter another employee's net salary answer 'yes'" << endl;
    cin >> answer;
};

    return 0;
}

