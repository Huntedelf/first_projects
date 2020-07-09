#include <iostream>

using namespace std;

int main()
{
int multiples = 4,integer,total, input, counter = 0;
cout << "enter number" << endl;
cin >> input;
for (integer =1; integer<=input;integer++)
{
    total=integer*multiples;
    if (total <= input){
    cout << total << endl;
    counter++;
}
    else{

    }
}
cout << "The count is: " << counter << endl;
    return 0;
}
