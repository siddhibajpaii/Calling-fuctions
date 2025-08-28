//Siddhi Bajpai
//24070123109
//B1

#include <iostream>
using namespace std;

void increment(int &S)
{
    S=S+5000;
    cout<<"Salary incremented";
}
int main()
{
    int sal=27000;
    increment(sal);
    cout<< "Value of a is:" <<sal << endl;
    return 0;
}

//Output:
//Salary incrementedValue of a is:32000
