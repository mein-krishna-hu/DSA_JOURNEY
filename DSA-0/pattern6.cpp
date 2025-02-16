#include<iostream>
using namespace std;
int pattern6(int n)
{
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i+1;j++){
            cout << j<< " ";
        }
        cout << endl;
    }
    return 0;
}

int main() {
    pattern6(7);
    return 0;
}

