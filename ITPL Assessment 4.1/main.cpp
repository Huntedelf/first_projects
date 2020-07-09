#include <iostream>

using namespace std;

void getTotalPrescriptions()
{
    double pescriptions, normalPescriptionRate = 100, bonusPescriptionRate = 30, bonus, overTarget;
    cout << "Number of pescriptions" << endl;
    cin >> pescriptions;
if (pescriptions <= 200){
    cout << "No bonus" << endl;
}
else {
    overTarget = pescriptions - 200;
    bonus = overTarget * bonusPescriptionRate;
    cout << "The bonus is R" << bonus << endl;
}
int main()
{
getTotalPrescriptions();
printf("%d\n",*getTotalPrescriptions());
}
    return 0;
}
