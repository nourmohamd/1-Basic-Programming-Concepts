#include <iostream>
#include <string>
using namespace std;
int main() {
    // Array Of Characters
    // Ex1:
    char ch1[5] = {'a', 'b', 'c', 'd'};
    // Last box for '\0' Or '_'
    cout<<ch1<<endl;
    // abcd

    // Ex2:
    char ch2[6] = {'q','w','d','\0','s'};
    cout<<ch2<<endl;
    // qwd

    // Enter Values For Array Of Characters
    // way1
    // Ex:
    char ch3[3];
    ch3[0] = 's';
    ch3[1] = 'w';

    // way2
    //Ex:
    char ch4[5] = "noor";
    cout<<ch4<<endl;
    // noor

    // way3
    // Ex1:
    char ch5[5];
    cin>>ch5;
    cout<<ch5<<endl;

    // Ex2:
    char ch6[10];
    cin>>ch6;
    // hhh sss
    cout<<ch6<<endl;
    // hhh
    // Note: For Solve That Error Write
    // cin.get(ch6, 10);

    // Ex3:
    char ch7[10];
    cin.get(ch7, 10);
    // hhh sss
    cout<<ch7<<endl;
    // hhh sss

    // Ex4: For Enter Character Character
    char ch8[10];
    cin.get(ch8, 10, '$');
    cout<<ch8<<endl;
    // Still Enter Values Until Enter '$'

    // Ex5:Enter Two Arrays
    // Way1:
    char ch9[5], ch10[5];
    cin.get(ch9, 5);
    cin.get();
    cin.get(ch10, 5);
    cout<<ch9<<endl;
    cout<<ch10<<endl;
    // Way2:
    char ch11[5], ch12[5];
    cin.getline(ch11, 5);
    cin.getline(ch12, 5);
    cout<<ch11<<endl;
    cout<<ch12<<endl;
    // Note: We Use cin.getline For Read Completation Line

    // Methods Work With Array Of Characters
    // 1 - strcpy_s ===> for copy
    // Ex1:
    char c1[5] = "noor", c2[5];
    strcpy_s(c2, c1);

    // 2 - strcat ===> for concatination
    // Ex1:
    char c3[5] = "no", c4[5] = "or";
    strcat(c3, c4);
    cout<<c3<<endl;
    // noor

    // 3 - strcmp ===> For Comapre Two Arrays Of Character
    // Ex1:
    cout<<strcmp(c3, c4)<<endl;
    /*
    c1>c2 ===> 1
    c1<c2 ===> -1
    c1=c2 ===> 0
    */

    // 4 - strlen ===> For Get Length Of Array
    cout<<strlen(c1)<<endl;

    return 0;
    system("PAUSE");
}
