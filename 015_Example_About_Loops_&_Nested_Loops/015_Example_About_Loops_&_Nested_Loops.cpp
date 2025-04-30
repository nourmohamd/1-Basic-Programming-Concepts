#include <iostream>
using namespace std;
int main() {
    // Example About Loops:
    // Ex1:
    int mark = 0;
    double sum = 0, avg = 0;
    for(int i=1;i<=10;i++) {
        cin>>mark;
        sum+=mark;
    }
    avg = sum/10;
    cout<<avg<<endl;
    // Ex2:
    for(int i = 10;i>=0;i--) {
        cout<<i<<endl;
    }
    // Ex3:
    for(int i=0;i<=20;i+=2) {
        cout<<i<<endl;
    }
    // Ex4:
    for(int i=1;i<=20;i+=2) {
        cout<<i<<endl;
    }
    // Ex5:
    int num=0;
    int even = 0, odd = 0;
    for(int i=0;i<=4;i++) {
        cin>>num;
        if(num%2==0) {
            cout<<"Even"<<endl;
            even++;
        } else {
            cout<<"Odd"<<endl;
            odd++;
        }
    }
    cout<<even<<" _ "<<odd<<endl;
    // Ex6:
    int fact = 0, sum1 = 1;
    cin>>fact;
    for(int i = 1;i<=fact;i++) {
        sum = sum1 * i;
    }
    cout<<sum1<<endl;
    // Ex7:
    int n = 0, sum2 = 0;
    cin>>n;
    for(int i =1;i<=n;i++) {
        sum2 = i * n;
        cout<<sum2<<endl;
    }
    // Ex8:
    for(int i=0,j=10; i<10&&j>0; cout<<i<<"_"<<j<<endl,i++,j--);
    // Nested Loops - Draw Shapes
    // Ex1:
    /*
        *****
        *****
        *****
        *****
        *****
    */
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    // Ex2:
    /*
        *
        **
        ***
        ****
        *****
    */
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=i;j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    // Ex3:
    /*
        *****
        ****
        ***
        **
        *
    */
    for(int i=1;i<=5;i++) {
        for(int j=5;j>=i;j--) {
            cout<<"*";
        }
        cout<<endl;
    }
    // Ex4:
    /*
            *
           **
          ***
         ****
        *****
    */
    for(int i=1;i<=5;i++) {
        for(int j=5;j>i;j--) {
            cout<<" ";
        }
        for(int s=1;s<=i;s++) {
            cout<<"*";
        }
        cout<<endl;
    }
    // Ex5:
    /*
        *****
         ****
          ***
           **
            *
    */
    for(int i=1;i<=5;i++) {
        for(int j=1;j<i;j++) {
            cout<<" ";
        }
        for(int s=5;s>=i;s--) {
            cout<<"*";
        }
        cout<<endl;
    }
    // Ex6:
    /*
            *
           ***
          *****
         *******
        *********
    */
    int e = 1;
    for(int i=1;i<=5;i++) {
        for(int j=5;j>i;j--) {
            cout<<" ";
        }
        for(int s=1;s<=e;s++) {
            cout<<"*";
        }
        cout<<endl;
        e += 2;
    }
    // Ex7:
    /*
        *********
         *******
          *****
           ***
            *
    */
    int xx = 9;
    for(int i=1;i<=5;i++) {
        for(int j=1;j<i;j++) {
            cout<<" ";
        }
        for(int s=1;s<=xx;s++) {
            cout<<"*";
        }
        cout<<endl;
        xx -= 2;
    }
    // Ex8:
    /*
        *****
        *   *
        *   *
        *   *
        *****
    */
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i==1||j==1||i==5||j==5) {
                cout<<"*";
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    // Ex9:
    /*
        *  *
         **
        *  *
    */
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i==j||j==6-i) {
                cout<<"*";
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    // Ex9:
    /*
        *****
           *
          *
         *
        *****
    */
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i==1||i==5||j==6-i) {
                cout<<"*";
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    // Ex10:
    /*
            *
           * *
          *   *
         *     *
        *********
    */
    for(int i=1;i<=10;i++) {
        for(int j=1;j<=20;j++) {
            if(i==10||j==i+10||i==11-j) {
                cout<<"*";
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
    system("PAUSE");
}
