#include <iostream>
using namespace std;
int main() {
    // Array ===> One Dimentional Array
    // Syntax: int name[size];
    // Example:
    // Ex1: 0 ===> size-1
    int arr1[5];
    arr1[0] = 0;// First Box
    arr1[4] = 4;// Last Box
    // Ex2:
    int arr2[5];
    arr2[0] = 8;
    arr2[1] = 10;
    // ...
    cout<<arr2[0]<<" - "<<arr2[1]<<endl;
    // Ex3:
    const int z = 3;
    int arr3[z];
    for(int i=0;i<z;i++)
        cin>>arr3[i];
    for(int i=0;i<z;i++)
        cout<<arr3[i]<<endl;
    // Ex4: ===> All Values Of Boxes Zero By Default
    int arr4[5] = {0};
    // All Boxes Zero
    // Ex5:
    int arr5[5] = {1, 2, 3};
    cout<<arr5[3]<<endl;
    // arr5[3] = arr5[4] = 0
    // Ex6:
    int arr6[] = {1, 2, 3, 4};
    // Size = 4 Auto Array Knowing Size

    return 0;
    system("PAUSE");
}
