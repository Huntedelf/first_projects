#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void emplName()
{
    string employeeName, idNum, currentSalary;
    cout << "Enter the Employee Name : ";
    cin >> employeeName;
    cout << "Enter the Employee ID Number : ";
    cin >> idNum;
    cout << "Enter the Employee Current Salary : ";
    cin >> currentSalary;
    fstream Salary;
        Salary.open("Salary.txt",std::ios_base::app);
        if (Salary.is_open()){
            Salary << employeeName << " " << idNum << " R" << currentSalary << endl;
            Salary.close ();
            cout << "Staff Details added successfully" << endl;
        }
        else{
            cout << "Staff Details added unsuccessfully" << endl;
        }
    cout << "" << endl;
    cout << "***********************************************" << endl;
}

void emplID()
{
    string id, line, word = "", wordArray[3];
    int offset, n = 0;
    ifstream Salary;
    Salary.open("Salary.txt");
    cout << "Enter ID : ";
    cin >> id;
    if (Salary.is_open()){
        while (!Salary.eof()){
            getline(Salary,line);
            if ((offset = line.find(id,0)) != string::npos) {
                string str = line;
                for (auto x : str){
            if (x == ' '){
                    n = n + 1;
                    wordArray[n] = word;
            word = "";
            }
        else
        {
            word = word + x;
        }
    }
    wordArray[3] = word;
    cout << "The employee you found is: " << wordArray[1] << endl;
    cout << wordArray[1] << "'s ID is " << wordArray[2] << " and earns " << wordArray[3] << endl;
            }
        }
    Salary.close();
    }
    cout << "" << endl;
    cout << "***********************************************" << endl;
}


int main()
{
    int answer;
    char interface;
    while (answer < 3){
    cout << "Welcome to Umnandi Consulting Employee System." << endl;
    cout << "         Please select an option" << endl;
    cout << "***********************************************" << endl;
    cout << "1 Enter New Staff Details" << endl;
    cout << "2 Search by ID" << endl;
    cout << "3 Exit Program" << endl;
    cin >> interface;
    answer = interface;
    answer = answer - 48;
    switch (interface)
    {
        case '1':
            emplName();
            break;
        case '2':
            emplID();
            break;
        case '3':
            return 0;
            break;

    }
    }
    return 0;
}
