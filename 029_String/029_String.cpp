#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
    // String
    // Example:
    string username;
    cin>>username;
    cout<<username<<endl;

    /*
        Method:
        1 - assign() || []
        2 - at()
        3 - length()
        4 - size()
        5 - substr()
        6 - swap()
        7 - find()
        8 - erase()
        9 - replace()
        10 - insert()
    */
    // Ex1:
    string x1="Mohamed Nour Abdo", x2;
    x2=x1;
    x2.assign(x1);
    cout<<x2<<endl;

    // Ex2:
    string x3;
    cin>>x3;
    // hhh ttt
    cout<<x3<<endl;
    // hhh
    // For Solve That Problem Type This:
    // getline(cin, name_variable)

    // Ex3:
    cout<<x1.at(0)<<endl;
    cout<<x1[0]<<endl;
    // M

    // Ex4:
    cout<<x1.size()<<endl;
    cout<<x1.length()<<endl;
    cout<<x1.substr(0, 7)<<endl;
    // Mohamed

    // Ex5:
    string x4="mo", x5="ro";
    x4.swap(x5);
    cout<<x4<<endl;
    // ro
    cout<<x5<<endl;
    // mo

    // Ex6:
    cout<<x1.find('o')<<endl;
    cout<<x1.rfind('o')<<endl;

    // Ex7:
    cout<<x1.erase(0, 8)<<endl;
    // Nour Abdo
    cout<<x1.erase(8)<<endl;
    // Nour Abdo

    // Ex8:
    // replace(position, length, new)
    cout<<x1.replace(0,7,"Ahmad")<<endl;

    // Ex9:
    cout<<x1.replace(x1.find('a'),1,"O")<<endl;
    // AhmOdd

    // Ex10:
    cout<<x1.insert(6,"EEE")<<endl;
    // AhmOddEEE



    return 0;
    system("PAUSE");

}
