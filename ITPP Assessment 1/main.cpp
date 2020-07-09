#include <iostream>
#include <iomanip>      // std::setw

using namespace std;


double getCharge(double hours){
    double charge = 2, chargeRate;
    if(hours > 3){
        chargeRate = hours - 3;
        chargeRate = chargeRate * 0.5;
        charge = charge + chargeRate;
    }
    if(charge > 10){
        return 10;
    }
    return charge;
}


int main()
{
    int amountOfCars;
    cout << "how many cars would you like to charge for parking?: ";
    cin >> amountOfCars;
    double hoursOfEachCar[amountOfCars], totalHours, totalCharge;
    for (int x = 0; x < amountOfCars; x++){
        cout << "Enter number of hours for car " << x+1 << " : ";
        cin >> hoursOfEachCar[x];
    }
    int width = 10;
    cout << "Car" << setw(width) << "Hours" << setw(width) << "Charge" << endl;;
    for (int x = 0; x < amountOfCars; x++){
        double charge = getCharge(hoursOfEachCar[x]);
        totalCharge = totalCharge + charge;
        totalHours = totalHours + hoursOfEachCar[x];
        cout << x+1 << setw(width) << hoursOfEachCar[x] << setw(width) << charge << endl;
    }
    cout << "TOTAL" << setw(width) << totalHours << setw(width) << totalCharge << endl;
    return 0;
}
