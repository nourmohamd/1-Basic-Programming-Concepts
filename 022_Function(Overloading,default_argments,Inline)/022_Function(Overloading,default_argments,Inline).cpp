#include <iostream>
using namespace std;
// Ex for overloading
void s(int a) {
    cout<<"Integer: "<<a<<endl;
}
void s(double a) {
    cout<<"Double: "<<a<<endl;
}
void s(char a) {
    cout<<"Character: "<<a<<endl;
}
// Ex for default argements
void ss(int n = 10) {
    cout<<n<<endl;
}
void a1(int n = 10, int k = 10) {
    cout<<n<<endl;
    cout<<k<<endl;
}
void a2(int n, int k = 10) {
    cout<<n<<endl;
    cout<<k<<endl;
}
// Ex for inline function
inline void f(int n) {
    n += 10;
    cout<<"Number is "<<n<<endl;
}
int main() {
    // Function
    // 1 - Overloading Function
    /*
    It is function that have the same name but it deffrent about them in
    parameter number or parameter datatype
    */

    // 2 - Default Argements
    /*
    It is function that have values As Swapping that values give them
    */

    // 3 - inline function
    /*
    It is function for make calling faster and better than before
    1 - Speed ​​up code execution time
    2 - Save space
    3 - It is a good when function was small
    */

    // Calling 1:
    s(10);
    // Integer: 10
    s(3.5);
    // Double: 3.5
    s('A');
    // Character: A

    // Calling 2:
    ss();
    a1(30);
    a2(1);

    // Calling 3:
    f(5);

    return 0;
    system("PAUSE");
}
