// https://static.takeuforward.org/wp/uploads/2022/08/P12.png

#include <iostream>
using namespace std;
int pattern12(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << start;
            start++;
        }
        for (int j = 0; j < 2 * n - 2 * i - 2; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            start--;
            cout << start;
        }
        cout << endl;
    }
    return 0;
}

int main()
{
    pattern12(4);
    return 0;
}