// *********
//  *******
//   *****
//    ***
//     *
//print this pattern
#include <iostream>
using namespace std;
int pattern8(int n) {
    for (int i = 0; i < n; i++) {
        // space
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // star
        for (int j = 2 * (n - i) - 2; j >= 0; j--) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

int main() {
    pattern8(9);
    return 0;
}