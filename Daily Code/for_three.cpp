#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Give the I/P"<<endl;
    cin>>num;

    int count=1;

    for(int raw=1;raw<=num;raw++){
        int val=raw;
        for(int col=1;col<=raw;col++){
           
            cout<<val<<"  ";
            val=val+1;
        }
        cout<<endl;
    }
    return 0;
}



// 1
// 2  3
// 3  4  5
// 4  5  6  7
// 5  6  7  8  9
// 6  7  8  9  10  11
// 7  8  9  10  11  12  13
// 8  9  10  11  12  13  14  15
// 9  10  11  12  13  14  15  16  17
