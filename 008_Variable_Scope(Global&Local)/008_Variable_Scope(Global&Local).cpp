#include <iostream>
using namespace std;
int x = 33;
int main() {
    // Variable Scope << Global + Local >>
    // Local
    {
        int x = 10;
        cout<<x<<endl;
        // 10
    }
    {
        int x = 10;
        cout<<x<<endl;
        // 10
    }
    // Global
    /*
        After using namespace std;
        int x = 10;
        And Called It By ::x
    */
    cout<<::x<<endl;
    {
        cout<<::x<<endl;
    }
    return 0;
}
