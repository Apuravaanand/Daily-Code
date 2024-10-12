#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Give the I/P"<<endl;
    cin>>num;

    char count='A';
    for(int raw=1;raw<=num;raw++){
        for(int col=1;col<=num;col++){

            cout<<count<<"   ";
            count=count+1;

        }
        cout<<endl<<endl;
    }
    return 0;
}

// Give the I/P
// 5
// A   B   C   D   E

// F   G   H   I   J

// K   L   M   N   O

// P   Q   R   S   T

// U   V   W   X   Y
