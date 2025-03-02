// https://static.takeuforward.org/wp/uploads/2022/08/P10.png
// print the above pattern
#include <iostream>
using namespace std;
int pattern10(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

int main()
{
    pattern10(5);
    return 0;
}
