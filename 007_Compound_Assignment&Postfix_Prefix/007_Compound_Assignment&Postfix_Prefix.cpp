#include <iostream>
using namespace std;
int main() {
    // Compound Assignment
    /*
        int x = 10;
        // Without Compound Assignment
        x = x + 20; ===> 30
        // With Compound Assignment
        x += 20; ===> 30
        ///////////////////////////////
        += -= *= /= %= **=
    */
    int k = 300;
    k += 199;
    printf("The Number Is %d\n", k);
    // Output: The Number Is 499
    // Postfix :=-=-=: Prefix
    // Examples:
    int x1 = 0;
    x1++;
    cout<<x1<<endl;
    // 1
    int x2 = 0;
    ++x2;
    cout<<x2<<endl;
    // 1
    int x3 = 0, x4 = 0;
    x4 = x3++;
    cout<<x4<<endl;
    cout<<x3<<endl;
    // 0
    // 1
    int x5 = 0, x6 = 0;
    x6 = ++x5;
    cout<<x6<<endl;
    cout<<x5<<endl;
    // 1
    // 1
    int x7 = 0;
    cout<<x7++<<endl;
    cout<<x7<<endl;
    // 0
    // 1
    int x8 = 0;
    cout<<++x8<<endl;
    cout<<x8<<endl;
    // 1
    // 1
    int x9 = 0, x10 = 0;
    x10 = ++x9 + x9++;
    cout<<x10<<endl;
    cout<<x9<<endl;
    // 2
    // 2
    int x11 = 0;
    cout<<++++++x11<<endl;
    // 3
    int x12 = 0;
    cout<<++x12<<" _ "<<x12++<<endl;
    // 1 _ 1
    return 0;
    system("PAUSE");
}
