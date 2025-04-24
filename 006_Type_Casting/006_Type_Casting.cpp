#include <iostream>
using namespace std;
int main() {
    // Type Casting
    // 1 - (DataType)Variable_Name
    // 2 - DataType(Variable_Name)
    // 3 - static_cast<DataType>(Variable_Name)
    // Example:
    float x = 3.14;
    cout<<x<<endl;
    cout<<(int)x<<endl;
    cout<<int(x)<<endl;
    cout<<static_cast<int>(x)<<endl;
    // Example:
    double xx, yy, zz;
    cin>>xx>>yy>>zz;
    double avg = (xx+yy+zz) / 3;
    cout<<avg<<endl;

    return 0;
    system("PAUSE");
}
