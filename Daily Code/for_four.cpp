#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Give the I/P"<<endl;
    cin>>num;

    for(int raw=1;raw<=num;raw++){
        for(int col=1;col<=raw;col++){
            cout<<(raw-col+1)<<" ";

        }
        cout<<endl;
    }
    return 0;
}

// Give the I/P
// 9
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
// 6 5 4 3 2 1
// 7 6 5 4 3 2 1
// 8 7 6 5 4 3 2 1
// 9 8 7 6 5 4 3 2 1