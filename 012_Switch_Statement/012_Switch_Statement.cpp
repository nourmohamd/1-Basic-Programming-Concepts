#include <iostream>
using namespace std;
int main() {
    // Switch Statement
    /*
        Syntax:
        switch(switch-on) {
            case 1: ...;
            break;
            case 2: ...;
            break;
            .
            .
            .
            case n: ...;
            break;
            default: ...;
            break;
        }
    */
    // Example: Make Calculator By Switch Statement
    int x = 0, y = 0;
    char operation = '\0';
    cin>>x>>y>>operation;
    switch(operation) {
        case '+': cout<<x+y<<endl;
        break;
        case '-': cout<<x-y<<endl;
        break;
        case '/': cout<<x/y<<endl;
        break;
        case '*': cout<<x*y<<endl;
        break;
        default: cout<<"Operation is not found in arithmetics"<<endl;
        break;
    }

    return 0;
    system("PAUSE");
}
