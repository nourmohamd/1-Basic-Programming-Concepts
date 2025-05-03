#include <iostream>
using namespace std;
void a_type() {
    cout<<"Type A"<<endl;
}
int b_type() {
    return 2;
}
// Examples:
int sum(int x, int y) {
    return x + y;
}
double avg(double x, double y, double z) {
    return (x+y+z)/3;
}
int max(int x, int y, int z) {
    int mx = x;
    if(mx<y)
        mx = y;
    else if (mx<z)
        mx = z;
    return mx;
}
void print_hello();
int main() {
    // Function Void, Return
    /*
        Syntax:
        void|Type name_function(Parameter) {
            return|print|statement
        }
    */
    // Calling Function
    a_type();
    cout<<b_type()<<endl;

    return 0;
    system("PAUSE");
}
void print_hello() {
    cout<<"Hello World!"<<endl;
}
