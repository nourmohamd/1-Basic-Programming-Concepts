#include <iostream>
using namespace std;
int main() {
    // 1 - Conditions
    // >= <= < > == === != <>
    // 2 - Logical Operators
    // And (&) - Or (|) - Not (!)
    /*
        And &&:
            1&&1 ===> 1
            1&&0 ===> 0
            0&&0 ===> 0
        Or ||:
            1||1 ===> 1
            1||0 ===> 1
            0||0 ===> 0
        Not !:
            !1 ===> 0
            !0 ===> 1
    */
    // Examples About If Condition:
    // Ex1:
    int x = 0;
    cin>>x;
    if(x>=0)
        cout<<"OK"<<endl;
    else
        cout<<"Not OK"<<endl;
    // Ex2:
    int x1, y1;
    cin>>x1>>y1;
    if(x1==y1) {
        cout<<"x1==y1"<<endl;
    } else if (x1>y1) {
        cout<<"x1>y1"<<endl;
    } else {
        cout<<"x1<y1"<<endl;
    }
    // Ex3:
    int x2 = 0;
    cin>>x2;
    if(x2%2==0) {
        cout<<"Even"<<endl;
    } else {
        cout<<"Odd"<<endl;
    }
    // Ex4:
    int x3 = 0;
    cin>>x3;
    if(x3%2==0) {
        if(x3>30) {
            cout<<"Big"<<endl;
        } else {
            cout<<"Small"<<endl;
        }
    } else {
        cout<<"Odd"<<endl;
    }
    // Ex5:
    if(0){
        cout<<"True"<<endl;
    } else {
        cout<<"False"<<endl;
    }




    return 0;
    system("PAUSE");
}
