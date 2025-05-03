#include <iostream>
using namespace std;
void a_type() {
    cout<<"Type A"<<endl;
}
int b_type() {
    return 2;
}
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
