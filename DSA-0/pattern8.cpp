// *********
//  *******
//   *****
//    ***
//     *
//print this pattern
#include <iostream>
using namespace std;
int pattern8(int n) {
<<<<<<< HEAD
    for (int i = 0; i < n; i++) {
        // space
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // star
        for (int j = 2 * (n - i) - 2; j >= 0; j--) {
            cout << "*";
=======
    for (int i=0;i<n;i++){
        //space
        for( int j=0;j<i;j++){
            cout<<" ";
        }
        //star
        for(int j =0;j<2*n-2*i-1 ;j++){
            cout<<"*";
        }
        //for space
        for(int j = 0;j<i;j++){
cout << " ";
>>>>>>> 70cbc362ed50d8a859cd618bdbf053cc802ef8f0
        }
        cout << endl;
    }

    return 0;
}

<<<<<<< HEAD
int main() {
    pattern8(9);
=======
int main(){
    pattern8(5);
>>>>>>> 70cbc362ed50d8a859cd618bdbf053cc802ef8f0
    return 0;
}
//print the pattern below
//*********
// *******
//  *****
//   ***
//    *
