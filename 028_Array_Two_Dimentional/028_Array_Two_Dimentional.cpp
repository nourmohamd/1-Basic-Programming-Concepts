#include <iostream>
using namespace std;
// f1
void f1(int arr[][5], int s) {
    for(int i=0;i<s;i++) {
        for(int j=0;j<5;j++) {
            cin>>arr[i][j];
        }
    }
}
// f2
void f2(int arr[][5], int s) {
    for(int i=0;i<s;i++) {
        for(int j=0;j<5;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    // Two Dimentional Array
    // Syntax: int arr[3][5] ===> [rows][columns]
    // Ex1:
    // Enter 2D_Array Values
    int arr1[3][3];
    for(int i=0;i<3;i++) {
        // row for loop
        for(int j=0;j<3;j++) {
            // column for loop
            cout<<"Please Value Of Element :"<<i<<"-"<<j<<" :";
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<3;i++) {
        cout<<"row: "<<i<<endl;
        for(int j=0;j<3;j++) {
            cout<<"column "<<j<<" is "<<arr1[i][j]<<endl;
        }
    }

    // Ex2:
    // Sum All Elements In 2D-Array
    int arr2[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int sum1 = 0;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            sum1+ = arr2[i][j];
        }
    }
    cout<<sum1<<endl;

    // Ex3:
    // Calculate Average For Every Student M Number Marks N
    int N,M,sum2=0;
    cin>>M>>N;
    int arr3[M][N];
    for(int i=0;i<M;i++) {
        for(int j=0;j<N;j++) {
            cin>>arr3[i][j];
        }
    }
    for(int i=0;i<M;i++) {
        for(int j=0;j<N;j++) {
            sum2+=arr3[i][j];
        }
        cout<<sum2/N<<endl;
        sum2=0;
    }

    // Ex4:
    // Print All Values On Main Katar
    char arr4[3][3] = {{'a','b','b'}, {'b','a','b'}, {'b','b','a'}};
    for(int i=0;i<M;i++) {
        for(int j=0;j<N;j++) {
            if(i==j) {
                cout<<arr4[i][j];
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    // Ex5:
    // function with 2d-Array
    int arr5[5][5];
    f1(arr5, 5);
    f2(arr5, 5);

    // Ex5:
    // Print Reverse Array
    int arr6[3][3];
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cin>>arr6[i][j];
        }
    }
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout<<arr6[j][i]<<" ";
        }
        cout<<endl;
    }


    return 0;
    system("PAUSE");
}
