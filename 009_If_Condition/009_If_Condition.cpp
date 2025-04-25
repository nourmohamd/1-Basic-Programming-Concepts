#include <iostream>
using namespace std;
int main() {
    // If Condition
    /*
        Ways To Use Condition:
        1 -
        if(condition) {
            statement
        }
        2 -
        if(condition) {
            statement
        } else {
            statement
        }
        3 -
        if(condition) {
            statement
        } else if (condition) {
            statement
        } else {
            statement
        }
    */
    // Examples:
    int x = 0;
    cin>>x;
    if(x%2==0) {
        cout<<"Even"<<endl;
    } else {
        cout<<"Odd"<<endl;
    }

    return 0;
    system("PAUSE");
}
