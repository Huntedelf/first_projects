#include <iostream>

using namespace std;

void logCall()
{
    int startTimeH, startTimeM, startTimeS, endTimeH, endTimeM, endTimeS, hours, minutes, seconds, discount, normalPrice;
    cout << "Enter time call ended (e.g. Hours enter minutes enter seconds enter)" << endl;
    cin >> startTimeH >> startTimeM >> startTimeS;
    cout << "Enter time call started" << endl;
    cin >> endTimeH >> endTimeM >> endTimeS;

    if(endTimeS > startTimeS)
    {
        --startTimeM;
        startTimeS += 60;
    }

    seconds = startTimeS - endTimeS;
    if(endTimeM > startTimeM)
    {
        --startTimeH;
        startTimeM += 60;
    }
    minutes = startTimeM-endTimeM;
    hours = startTimeH-endTimeH;

    cout << " = " << hours << ":" << minutes << ":" << seconds << endl;
    if(hours >= 1){
            cout << "This call qualifies for a discount" << endl;
            hours = hours * 60;
            hours = hours + minutes;
            discount = hours - 10;
            normalPrice = 0.45 * 10;
            discount = discount * 0.225 + normalPrice;
            normalPrice = hours * 0.45;
            cout << "Normal price R" << normalPrice << endl;
            cout << "Your discounted price R" << discount << endl;
    }
    else if (minutes > 10){
        cout << "This call qualifies for a discount" << endl;
        discount = minutes - 10;
            normalPrice = 0.45 * 10;
            discount = discount * 0.225 + normalPrice;
            normalPrice = minutes * 0.45;
            cout << "Normal price R" << normalPrice << endl;
            cout << "Your discounted price R" << discount << endl;
    }
    else{
        cout << "this call does not qualify for a discount" << endl;
        normalPrice =0.45 * minutes;
        cout << "Normal price R" << normalPrice << endl;
        cout << "Discounted price R0" << endl;
    }
    cout << "" << endl;
    cout << "************************************" << endl;
}
void funRide()
{
    string funAnswer = "no";
    cout << "Lets see who gives up first" << endl;
    do {
    cout << "Do you give up" << endl;
    cin >> funAnswer;
    }while (funAnswer == "no");
    cout << "hehehe im quite persistent thx for the assessment its been difficult so far (haven't slept)" << endl;
    cout << "" << endl;
    cout << "************************************" << endl;
}
int main()
{
    int answer;
    char interface;
    while (answer = 2){
    cout << "Welcome to the call log System." << endl;
    cout << "    Please select an option" << endl;
    cout << "************************************" << endl;
    cout << "1 Log a Call" << endl;
    cout << "2 Exit Program" << endl;
    cout << "3 Go on a fun ride" << endl;
    cin >> interface;
    answer = interface;
    answer = answer - 48;
    switch (interface)
    {
        case '1':
            logCall();
            break;
        case '2':
            return 0;
            break;
        case '3':
            funRide();
            break;
    }
    }
    return 0;
}
