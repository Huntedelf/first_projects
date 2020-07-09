#include <iostream>

using namespace std;

int main()
{
string answer;
double productPrice, price2, change, total, pay;
bool price;
cout << "Enter product price" << endl;
cin >> productPrice;
cout << "Do you want to add anymore products?" << endl;
cin >> answer;
if (answer == "yes"){
    price = true;
}
else if(answer == "no"){
    price = false;
}
while (price == true)
{
    cout << "Enter product price" << endl;
    cin >> price2;
    total = total + price2;
    cout << "Do you want to add anymore products?" << endl;
    cin >> answer;
    if (answer == "yes"){
        price = true;
    }
    else if(answer == "no"){
        price = false;
    }
}
total = total + productPrice;
cout << "The total is R" << total << endl;
cout << "How much did customer pay?" << endl;
cin >> pay;
change = pay - total;
cout << "The change is R" << change;
    return 0;
}
