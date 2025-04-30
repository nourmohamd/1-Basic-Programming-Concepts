#include <iostream>
using namespace std;
int main() {
    // Loops { For, While, Do While }
    // 1 - For Loop
    /*
        Syntax:
            for(int i=0;i<10;i++) {
                cout<<i<<endl;
            }
    */
    //Examples:
    // Ex1:
    int i=1;
    for(;i<10;i++)
        cout<<i<<endl;
    // Ex2:
    for(int i=1;i<=10;cout<<"i = "<<i<<endl,i++);
    // Ex3:
    for(int i=1;i<10;i++)
        cout<<i<<endl;
    // 2 - While Loop
    /*
        int i=1;
        while(i<=10)
        {
            cout<<i<<endl;
            i++;
        }
    */
    // 3 - Do-While Loop
    /*
        Syntax:
        int i = 1;
        do {
            cout<<i<<endl;
            i++;
        }while(i<=10);
    */
    // Always Do-While Loop Execute =One= A Less
    return 0;
    system("PAUSE");
}
