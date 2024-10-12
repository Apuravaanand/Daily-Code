#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Give the I/P"<<endl;
    cin>>num;

    char count='A';
    for(int raw=1;raw<=num;raw++){
        for(int col=1;col<=raw;col++){

            char count='A'+raw+col-2;

           cout<<count<<"  ";

        }
        cout<<endl;
    }
    return 0;
}

// Give the I/P
// 13
// A
// B  C
// C  D  E
// D  E  F  G
// E  F  G  H  I
// F  G  H  I  J  K
// G  H  I  J  K  L  M
// H  I  J  K  L  M  N  O
// I  J  K  L  M  N  O  P  Q  
// J  K  L  M  N  O  P  Q  R  S
// K  L  M  N  O  P  Q  R  S  T  U
// L  M  N  O  P  Q  R  S  T  U  V  W
// M  N  O  P  Q  R  S  T  U  V  W  X  Y