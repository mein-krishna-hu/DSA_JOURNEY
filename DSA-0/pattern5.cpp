#include<iostream>
using namespace std;
int pattern5(int n)
{
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i;j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

int main(){
pattern5(5);
return 0;
}