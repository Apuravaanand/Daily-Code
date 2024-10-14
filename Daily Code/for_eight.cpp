#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Give the I/P"<<endl;
    cin>>num;

    for(int raw=1;raw<=num;raw++){
         for(int spa=num-raw;spa=spa;spa--){
            cout<<"  ";
        }
       
         for(int col=1;col<=raw;col++){
            cout<<"* ";
        }
       
        cout<<endl;
    }

    
    return 0;
}

// if col<=raw
// Give the I/P
// 7
// - - - - - - * 
// - - - - - * * 
// - - - - * * * 
// - - - * * * * 
// - - * * * * * 
// - * * * * * * 
// * * * * * * * 

// if col<=num
// Give the I/P
// 7
// - - - - - - * * * * * * * 
// - - - - - * * * * * * *
// - - - - * * * * * * *
// - - - * * * * * * *
// - - * * * * * * *
// - * * * * * * *
// * * * * * * *

