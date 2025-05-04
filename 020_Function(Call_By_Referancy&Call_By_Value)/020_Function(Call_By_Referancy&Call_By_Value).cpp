#include <iostream>
using namespace std;
int main() {
    // Function Call_By_Reference & Call_By_Value
    // 1 - Call_By_Reference
    /*
        It is a function recived parameters and changed on it
        then returned it
        such as:
        ========
        void f1(int&a, int&b) {
            a++;
            b++;
        }
        Calling:
        --------
        int x = 1, y = 2;
        f1(x, y);// x = 2, y = 3
    */

    // 2 - Call_By_Value
    /*
        It is a function recived parameters and Not changed on it
        then returned it
        such as:
        ========
        void f1(int a, int b) {
            a++;// a = 2
            b++;// b = 3
        }
        Calling:
        --------
        int x = 1, y = 2;
        f1(x, y);// x = 1, y = 2
    */
    /*
        Examples:
        =========
        // 1
        void a(int&a, int b) {
            a++;// a = 2
            b++;// b = 3
        }
        int x = 1, y = 2;
        f1(x, y);// x = 2, y = 2
        // 2 Swapping
        #include <algorithm>
        --------------------
        int x = 2, y = 1;
        swap(x, y);
        // 3 Swapping
        int x = 2, y = 1;
        y = y +|^ x;
        x = y -|^ x;
        y = y -|^ x;
        // 4 loop in function
        void s(int n) {
            for(int i=1;i<=n;i++) {
                cout<<"Hello"<<endl;
            }
        }
        // Calling
        s(5);
    */


    return 0;
    system("PAUSE");
}
