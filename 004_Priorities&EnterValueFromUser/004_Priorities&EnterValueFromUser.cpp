#include <iostream>
using namespace std;
int main() {
    // Priorities
    // Highest ===> Lowest
    // (), **, */%, +-, [=!=], logial operator [and or]
    int x = 100 + 2*2 + 14/7;
    cout<<x<<endl;
    // Output: 106

    // Enter a Value From User ?
    // way1:
    int o = 0;
    cin>>o;
    cout<<o<<endl;
    // way2:
    int a = 0;
    scanf("%d", &a);
    printf("The Number is %d", a);

    return 0;
    system("PAUSE");
}
