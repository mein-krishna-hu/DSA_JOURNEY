// print the pattern below
// https://static.takeuforward.org/wp/uploads/2022/08/P13.png
#include <iostream>
using namespace std;
int pattern2(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start++;
        }
        cout << endl;
    }
    return 0;
}
int main()
{
    pattern2(5);
    return 0;
}