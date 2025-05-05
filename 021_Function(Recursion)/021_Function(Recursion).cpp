#include <iostream>
using namespace std;
// Examples:
// Ex1: ===> Factorial
int factorial(int n) {
    if(n<=1)
        return 1;
    else {
        return n * factorial(n-1);
    }
}
// Ex2: ===> Fiboance
/*
0 1 2 3 4 5 6
0 1 1 2 3 5 8
*/
int fib(int n) {
    if(n==0||n==1)
        return n;
    else {
        return fib(n-2) + fib(n-1);
    }
}
// Ex3: ===> Sum Range
int sum(int n) {
    if(n<1)
        return 0;
    else
        return n + sum(n - 1);
}
// Ex4: sum from x to y
int sum(int x, int y) {
    if(x==y)
        return x;// | return y
    else {
        return y + sum(x, y-1);// | x + sum(x+1, y)
    }
}
// Ex5: ===> For Print
/*
    *****
    ****
    ***
    **
    *
*/
void print(int n) {
    if(n<1)
        return;
    else
        for(int i=0;i<n;i++)
            cout<<"*"<<endl;
    cout<<endl;
    print(n-1);
}
// Ex6: ===> For Print
/*
    *
    **
    ***
    ****
    *****
*/
void print_(int n) {
    if(n<1)
        return;
    print_(n-1);
    for(int i=0;i<n;i++)
        cout<<"*"<<endl;
    cout<<endl;
}
// Ex7: ===> For Split Number
void s(long long n) {
    if(n==0)
        return;
    else {
        s(n/10);
        cout<<n%10<<endl;
    }
}
int main() {
    // Function ===> Recursion
    /*
    Syntax:
    void f(int n) {
        if(n<1)
            return;// Base Case
        else
            cout<<"Hello"<<endl;
        f(n - 1);// Sub Problem
    }
    Calling:
    ========
    f(10);
    */


    return 0;
    system("PAUSE");
}
