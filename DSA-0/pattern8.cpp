#include <iostream>
using namespace std;
int pattern8(int n) {
    for (int i=0;i<n;i++){
        //space
        for(){
            cout<<" ";
        }
        //star
        for(){
            cout<<"*";
        }
        //for space
        for(){
cout << " ";
        }
        cout << endl;
    }

    return 0;
}

int main(){
    pattern8(9);
    return 0;
}