#include <iostream>
using namespace std;
int pattern7(int n) {
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
        }
        cout << endl;
    }

    return 0;
}

int main(){
    pattern7(9);
    return 0;
}