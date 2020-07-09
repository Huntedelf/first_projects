#include <iostream>

using namespace std;

int main()
{
    string monthOrYear;
    int loanRepaymentPeriod;
    double loan, interestRate, repayment;
cout << "Enter the desired loan" << endl;
cin >> loan;
cout << "Enter interest rate percentage" << endl;
cin >> interestRate;
cout << "Do you want to pay monthly or yearly?" << endl;
cin >> monthOrYear;
cout << "Enter how many months or years until you have to repay" << endl;
cin >> loanRepaymentPeriod;
interestRate = interestRate/100;
if (monthOrYear == "monthly"){
    repayment = loan * (1 + interestRate * (loanRepaymentPeriod/12));
    cout << "The repayment is " << repayment << endl;
}
else {
    repayment = loan * (1 + interestRate * loanRepaymentPeriod);
    cout << "The repayment is " << repayment << endl;
    }

    return 0;
}
