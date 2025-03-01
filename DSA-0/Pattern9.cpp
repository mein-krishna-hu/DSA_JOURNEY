// *********
//  *******
//   *****
//    ***
//     *
//print this pattern
#include <iostream>
using namespace std;
int pattern8(int n) {
    for (int i=0;i<n;i++){
          //space
          for( int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int j = 0;j< 2*i+1;j++){
            cout<<"*";
        }
        //for space
        for(int j = 0;j<n-i-1;j++){
cout << " ";
        } //space
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
        }
        cout << endl;
    }

    return 0;
}

int main(){
    pattern8(5);
    return 0;
}

