#include <iostream>

using namespace std;



int main()
{
string answer = "yes";
do{
    string name;
    double basicSalary, basicSalaryRate, totalSalary, travelAllowance, overtime, overtimePayRate, overtimePay, sundryExpenses;
    cout << "Enter employee name?" << endl;
    cin >> name;
    cout << "How much is your employees basic salary?" << endl;
    cin >> basicSalary;
    cout << "How far does your employee travel each day? (km)" << endl;
    cin >> travelAllowance;
    cout << "How many hours did your employee work overtime this month?" << endl;
    cin >> overtime;
    cout << "How much was your employees sundry expenses?" << endl;
    cin >> sundryExpenses;
    travelAllowance = travelAllowance *3;
    basicSalaryRate = basicSalary / 21;
    overtimePayRate = basicSalaryRate * 1.5;
    overtimePay = overtime * overtimePayRate;
    totalSalary = basicSalary + travelAllowance + overtimePay + sundryExpenses;
    cout << name << "'s total salary is " << totalSalary << endl;
    cout << "if you want to enter another employee answer 'yes'" << endl;
    cin >> answer;
}while (answer == "yes");
return 0;
}
