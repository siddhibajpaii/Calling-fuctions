//Siddhi Bajpai
//24070123109
//B1

#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int swap;
    swap=*x;
    *x=*y;
    *y=swap;
}
int main()
{
    int x=500, y=100;
    swap(&x,&y);
    cout<<"Value of x is:"<<x<<endl;
    cout<<"Value of y is:"<<y<<endl;
    return 0;
}

//Output:
//Value of x is:100
//Value of y is:500
