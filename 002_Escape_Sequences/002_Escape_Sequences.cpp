#include <iostream>
using namespace std;
int main() {
    // Types Of Escape Sequences:
    /*
    \n ===> For Break Line
    \a ===> For Make Sound
    \b ===> For Remove Letter Before
    \f ===> For Show A
    \r ===> For Remove All Before Place You Added It
    \\ ===> For Escape \ Slash
    \" ===> For Print "
    \' ===> For Print '
    */
    // Examples:
    cout<<"Mohamed\nNour\nAbdo\n";
    cout<<"Hello, \a \"Between\""<<endl;
    // Hello,  "Between"
    cout<<"Hello, { \f }"<<endl;
    // Hello, { ♀ }
    cout<<"Mohamed\b"<<endl;
    // Mohame
    cout<<"Mohamed\rNour Abdo"<<endl;
    // Nour Abdo
    cout<<"Mohamed \'Nour\'"<<endl;
    // Mohamed 'Nour'
    return 0;
}
