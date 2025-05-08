#include <iostream>
using namespace std;
int main() {
    // 1 - Aliasing
    // For RelationShip Variables With Them
    // Example:
    int x = 1;
    int&y = x;
    // x = 1, y = 1
    y++;
    // x = 2, y = 2

    cout<<x<<" "<<y<<endl;
    // 2 2

    // 2 - Constant
    // const int x = 10 || #define x 10
    const int x2 = 12;
    #define x3 12
    cout<<x2<<endl;
    cout<<x3<<endl;

    return 0;
    system("PAUSE");
}
