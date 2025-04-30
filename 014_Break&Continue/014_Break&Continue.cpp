#include <iostream>
using namespace std;
int main() {
    // Break && Continue
    // Break Uses For Break A Loop
    // Continue Uses For
    // Example: Break
    for(int i=1;i<=10;i++) {
        if(i == 4)
            break;
        cout<<i<<endl;
    }
    // Example: Continue
    for(int i=1;i<=10;i++) {
        if(i == 4)
            continue;
        cout<<i<<endl;
    }
    return 0;
    system("PAUSE");
}
