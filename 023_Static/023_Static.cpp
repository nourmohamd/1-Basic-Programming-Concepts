#include <iostream>
using namespace std;
// Example About Static:
void s() {
    static int x = 0;
    x++;
    printf("The Number Of Students Is : %d\n", x);

    if(x>=4)
        cout<<"YES"<<endl;
}
int main() {
    // Static Property
    // We Use Static Keyword For make variable or function statics

    // Calling s Function :
    s();
    // The Number Of Students Is : 1
    s();
    // The Number Of Students Is : 2
    s();
    s();
    // The Number Of Students Is : 3

    // Note: Without static keywords All Callings Get 1


    return 0;
    system("PAUSE");
}
