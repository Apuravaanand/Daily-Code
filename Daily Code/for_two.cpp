#include<iostream>
using namespace std;
int main(){

    int n;

    cout<<"Take I/P"<<endl;
    cin>>n;

    int count=1;


    for(int raw=1;raw<=n;raw++){
        for(int col=1;col<=raw;col++){
            cout<<count<<" ";
            count=count+1;
        }
        cout<<endl;
    }
    return 0;
}