// https://static.takeuforward.org/wp/uploads/2022/08/P9.png
// print this pattern
#include <iostream>
using namespace std;
int pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // for space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
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
        }
        cout << endl;
    }
}

int main()
{
    pattern9(5);
    return 0;
}
