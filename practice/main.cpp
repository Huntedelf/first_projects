#include <iostream>

using namespace std;

int main()
{
    string name;
    cout << "Welcome" << endl;
    cout << "What is your name" << endl;
    cin >> name;
    cout << "Hi " << name << endl;
    double testScore;
    cout << "What was your test score?" << endl;
    cin >> testScore;
    double maxScore;
    cout << "What was the max Score?" << endl;
    cin >> maxScore;
    cout << "" << endl;
    double percentage;
    percentage = testScore / maxScore * 100;
    cout << name << " you scored " << testScore << " out of " << maxScore << endl;
    cout << "You got: " << percentage << "%" << endl;
    if (percentage < 40)
    {
        cout << "You Failed" << endl;
    }
    else
    {
        cout << "You Passed" << endl;
    }
    return 0;
}
