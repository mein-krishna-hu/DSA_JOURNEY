#include<iostream>
using namespace std;
int pattern1(int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "* ";

        }
        cout<<endl;
    }
    return 0;
}
int main(){
    pattern1(5);
    return 0;
}
