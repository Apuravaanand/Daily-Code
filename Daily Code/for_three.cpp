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