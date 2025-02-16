#include<iostream>
using namespace std;
int pattern4(int n){
        for (int i=1;i<=n;i++){
            for (int j=1;j<=i;j++){
                cout << i<<" " ;
            }
            cout << endl;
        }
        return 0;
    }
int main(){
    pattern4(5);
    return 0;
}