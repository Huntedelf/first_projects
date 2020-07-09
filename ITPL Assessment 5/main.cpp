#include <iostream>
#include <fstream>
using namespace std;

int main()
{
ifstream pupilList;
pupilList.open("pupilsnames.txt");
string name;
while (!pupilList.eof())
{
    getline(pupilList,name);
    cout << name << endl;
}
pupilList.close();
    return 0;
}
