#include <iostream>
using namespace std;
int main() {
    // Additional Rules
    // 1 - unsigned for Positive Number Only
    // Ex:
    unsigned int x1 = 5;
    // 2 - signed for Negative, Positive Number
    // Ex:
    signed int x2 = -1;
    signed int x3 = 1;
    // 3 - New Way To Initial Variable
    int x4(15);
    // 4 - Constant Variables
    // Syntax: const int x = 10; , #define x 10
    #define x5 10
    // 5 - sizeof for variables
    int x6 = sizeof(x4);
    cout<<x6<<endl;
    // 4
    // 6 - For Select Number Of Number After , in Float Number
    cout<<setprecision(3)<<setiosflags(ios::fixed)<<setiosflags(ios::showpoint);
    // But it need #include<iomanip>
    // 7 - Comments
    // one
    /*
        two
    */
    // 8 - Code Ascii
    /*
    backspace ===> 8
    enter ===> 10
    space ===> 32
    ! ===> 33
    0 ---> 9 ===> 48 ---> 57
    A ---> Z ===> 65 ---> 90
    a ---> z ===> 97 ---> 122
     */

    return 0;
    system("PAUSE");
}
