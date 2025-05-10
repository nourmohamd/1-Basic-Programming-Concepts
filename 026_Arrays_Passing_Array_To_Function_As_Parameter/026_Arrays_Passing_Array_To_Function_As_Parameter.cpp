#include <iostream>
#include <algorithm>
using namespace std;
// Here We Go
// Function For Print Array
void print_array(int arr[], int size) {
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
// Function For Enter Array
void enter_array(int arr[], int size) {
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
}
// Function For Sorting Array
void sort_array(int arr[], int size) {
    for(int i=0;i<size;i++) {
        for(int j=0;j<size-1;j++) {
            if(arr[j]<arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}
int main() {
    // Arrays Examples:
    // Ex1:
    // Enter 10 Values By Users
    int arr1[10];
    for(int i=0;i<10;i++) {
        cout<<"Enter Value: ";
        cin>>arr1[i];
    }
    for(int i=0;i<10;i++) {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    // Ex2:
    // Copy Array To Another Array ( arr2 = arr1 )
    int arr2[10];
    for(int i=0;i<10;i++) {
        // empty = full
        arr2[i] = arr1[i];
    }
    for(int i=0;i<10;i++) {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    // Ex3:
    // Sum Array Size 5
    int arr3[5] = {1,2,2,1,6};
    int sum1 = 0;
    for(int i=0;i<5;i++) {
        sum+=arr3[i];
    }
    cout<<"The Sum Is "<<sum1<<endl;

    // Ex4:
    // Sum Odd Numbers & Sum Even Numbers
    int arr4[5] = {1, 2, 3, 4, 5};
    int num_odd = 0, num_even = 0;
    for(int i=0;i<5;i++) {
        if(arr4[i]%2==0) {
            num_even++;
        } else {
            num_odd++;
        }
    }
    cout<<"Odd Numbers "<<num_odd<<endl;
    cout<<"Even Numbers "<<num_even<<endl;

    // Ex5:
    // Find Average Student
    double arr5[6] = {100, 77, 86, 99, 68, 65};
    double avg = 0;
    for(int i=0;i<6;i++) {
        avg+=arr5[i];
    }
    cout<<"Average Is "<<avg/6<<endl;

    // Ex6:
    // Find Number Searching In Array
    int arr6[5] = {1, 2, 3, 4, 5};
    int x;
    cout<<"Enter Number For Seaching in Array ";
    cin>>x;
    bool is_found = false;
    int i=0;
    for(;i<5;i++) {
        if(x == arr6[i]) {
            is_found = true;
            break;
        }
    }
    if(is_found) {
        cout<<"We Found Number X In Position "<<i<<endl;
    } else {
        cout<<"We Can't Found Number X In Array"<<endl;
    }

    // Ex7:
    // Sorting Array (Bubble Sort)
    int arr7[6] = {6, 1, 3, 0, 2, 5};
    for(int i=0;i<6;i++) {
        for(int j=0;j<6-1;j++) {
            if(arr7[j]<arr7[j+1]) {
                int tmp = arr7[j];
                arr7[j] = arr7[j+1];
                arr7[j+1] = tmp;
            }
        }
    }
    for(int i=0;i<6;i++) {
        cout<<arr7[i]<<endl;
    }

    // Ex8:
    // Sorting Array By Another Algorithm
    int arr8[5] = {5, 6, 1, 0, -10};
    for(int i=0;i<6-1;i++) {
        for(int j=0;j<6-i-1;j++) {
            if(arr8[j]<arr8[j+1]) {
                swap(arr8[j], arr8[j+1]);
            }
        }
    }
    for(int i=0;i<6;i++) {
        cout<<arr8[i]<<endl;
    }

    // Ex9:
    int arr9[7] = {1, 2, 3, 4, 5, 6, 7};
    for(int i=0;i<7/2;i++) {
        swap(arr9[i], arr9[7-i-1]);
    }
    for(int i=0;i<6;i++) {
        cout<<arr8[i]<<endl;
    }
    // Note: You Can Make Constant Array Like Variables
    const int arr10[5];

    // Passing Array To Function As Parameter
    // Look To Top For Understand

    // Calling print_array
    enter_array(arr6, 5);
    sort_array(arr6, 5)
    print_array(arr6, 5);
    return 0;
    system("PAUSE");
}
