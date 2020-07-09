#include <iostream>

using namespace std;

void calAmountDue()
{
int numLCD;
double lcdPrice, amountDue;
cout << "Enter the number of LCDs ordered" << endl;
cin >> numLCD;
cout << "Enter the current price of each LCD: R" << endl;
cin >> lcdPrice;
amountDue = numLCD * lcdPrice;
cout << "The amount due is R" << amountDue << endl;
}

int main()
{
string isOrder;
cout << "Do you have an order? Y or N :" << endl;
cin >> isOrder;
if (isOrder == "Y"){
    calAmountDue();
}
else{
    cout << "No orders done today" << endl;
}
    return 0;
}
