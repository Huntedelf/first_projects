#include <iostream>

using namespace std;

int main()
{
    string answer = "Y";
    int x = 0, studentNum[50], testMark[50], examMark[50], finalMark[50], testPerc[50], examPerc[50], amount, finalMarkAvg[amount], n = 0;
    do {
        x=x+1;
        studentNum[x] = x;
        cout << "student number " << studentNum[x] << endl;
        cout << "Test mark (0-100):" << endl;
        cin >> testMark[x];
        cout << "Exam mark (0-100):" << endl;
        cin >> examMark[x];
        testPerc[x] = 0.4 * testMark[x];
        examPerc[x] = 0.6 * examMark[x];
        finalMark[x] = testPerc[x] + examPerc[x];
        cout << "would you like to enter another student's marks?(Y)es/(N)o" << endl;
        cin >> answer;
        amount = studentNum[x];
    }while(answer == "Y");
            amount++;
    for (int x = 1; x < amount; x++){
        cout << "Student number " << studentNum[x] << endl;
        cout << "===============" << endl;
        cout << "Test mark: " << testMark[x] << "/100" << endl;
        cout << "Exam mark: " << examMark[x] << "/100" << endl;
        cout << "Final mark: " << finalMark[x] << "/100" << endl;
        cout << "===============" << endl;
        cout << "" << endl;
        n=n+1;
        finalMarkAvg[n] = finalMark[x];
    }

    return 0;
}
