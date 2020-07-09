#include <iostream>

using namespace std;

int main()
{
string answer = "yes";
while (answer == "yes")
    {
    char arithmetic;
    float num1, num2;
    cout << "Enter two number" << endl;
    cin >> num1 >> num2;
    cout << "Enter one of these arithmetic operators that you would like to perform '+','-','/','*'" << endl;
    cin >> arithmetic;
    switch(arithmetic){
        case '+':
            cout << num1+num2 << endl;
            break;
        case '-':
            cout << num1-num2 << endl;
            break;
        case '*':
            cout << num1*num2 << endl;
            break;
        case '/':
            cout << num1/num2 << endl;
            break;
        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Operator is not correct" << endl;
            break;}
    cout << "Would you like to perform another mathematical calculation?(answer 'yes' or 'no')" << endl;
    cin >> answer;
    }
    return 0;
    exit(0);
}
