#include<iostream>
using namespace std;
int pattern2(int n)
{
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
int main(){
    pattern2(5);
    return 0;
}