#include <iostream>
#include <iomanip>      // std::setw
#include <fstream>
using namespace std;
int main()
{
    char yearsOrMonths;
    double loan, loanRate, years, months, monthlyPay;
    cout << "Enter the amount of the loan:" << endl;
    cin >> loan;
    cout << "Enter the rate of the loan: (e.g. 5.35%)" << endl;
    cin >> loanRate;
    cout << "How long is the loan?" << setw(16) << "Enter Y or M" << endl;
    cout << "(Y)ears" << endl;
    cout << "(M)onths" << endl;
    cin >> yearsOrMonths;
    switch(yearsOrMonths){
        case 'Y':
            cout << "How many years is your loan for?" << endl;
            cin >> years;
            months = years * 12;
            break;
        case 'M':
            cout << "How many months is your loan for?" << endl;
            cin >> months;
            break;
    }
    fstream payment;
        payment.open("payment.txt");
        payment << "The following is your Loan Calculation" << endl;
        payment << "" << endl;
        payment << "Loan Amount       = R" << loan << endl;
        payment << "Rate              = " << loanRate << "%" << endl;
        payment << "Months            = " << months << endl;
        payment << "" << endl;
        payment.close ();
    loanRate = loanRate / 100;
    loanRate = loanRate * loan;
    loan = loan + loanRate;
    monthlyPay = loan / months;

        payment.open("payment.txt",std::ios_base::app);
        payment << "Monthly Payments  = R" << monthlyPay << endl;
        payment.close ();
    cout << "Your monthly payment will be R" << monthlyPay << endl;
    cout << "" << endl;
    cout << "All information has been placed into a file" << endl;
    return 0;
}
